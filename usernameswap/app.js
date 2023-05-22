function getUrlParameter(name) {
    name = name.replace(/[\[]/, '\\[').replace(/[\]]/, '\\]');
    var regex = new RegExp('[\\?&]' + name + '=([^&#]*)');
    var results = regex.exec(location.search);
    return results === null ? '' : decodeURIComponent(results[1].replace(/\+/g, ' '));
  }
  // Get OldExternalId and NewExternalId parameters
const oldId = getUrlParameter('OldExternalId');
const newId = getUrlParameter('NewExternalId');


window.onload = function(){
    console.log(newId)

    if(oldId && newId)
    {
        displayOutput('OldExternalId,NewExternalId\n'+oldId+','+newId+'\n','OldExternalId,NewExternalId\n'+newId+',zzz_'+newId+'\n','usernameSwap_'+newId+'.csv')
        convertTextAreaToTable('originalTextArea');
        convertTextAreaToTable('modifiedTextArea');

      }
}
function updateUrlParams() {
  var input1Value = document.getElementById("oldOne").value;
  var input2Value = document.getElementById("newOne").value;
  var newUrl = window.location.href.split('?')[0] + '?OldExternalId=' + input1Value + '&NewExternalId=' + input2Value;
  window.location.href = newUrl;
}
function processFile() {
    console.log("Processing Started...")
    var fileInput = document.getElementById('fileInput');
    var file = fileInput.files[0];
    var reader = new FileReader();
  
    reader.onload = function(event) {
      var contents = event.target.result;
      var modifiedContents = modifyCSV(contents);
      displayOutput(contents, modifiedContents, file.name);
    };
  
    reader.readAsText(file);
  }
    function sanitizeString(string) {
        if(string)
        {
            return string.replace(/[^\x20-\x7E]/g, '');
        }
        else
        {
            return "";
        }
  }

  function modifyCSV(contents) {
    var rows = contents.split('\n');
    var output = 'OldExternalId,NewExternalId' + '\n';
  
    for (var i = 1; i < rows.length; i++) {
    // console.log("###############new row###################")
    //   console.log(rows[i])
      var newId = sanitizeString(rows[i].split(',')[1]);
    //   console.log(newId)
  
      var modifiedNewId = 'zzz_' + newId;
    //   console.log(modifiedNewId)
        if(modifiedNewId == 'zzz_')
        {
            console.log("There was an error with the user on row "+ i)
        }
        else
        {
            output += newId + "," + modifiedNewId+'\n';
        }
    }
  
    return output;
  }
  
  function displayOutput(originalContents, modifiedContents, filename) {
    var timestamp = new Date().toISOString().replace(/[:.]/g, '-');
    var modifiedFilename = "1_zzz_" + filename.replace('.csv', '') + "_" + timestamp + '.csv';
    var originalFilename = "2_nozzz_" + filename.replace('.csv', '') + "_" + timestamp + '.csv';

    var outputContainer = document.getElementById('outputContainer');
    var originalTextArea = document.createElement('textarea');
    originalTextArea.id = "originalTextArea";
    originalTextArea.value = originalContents;
    originalTextArea.setAttribute('rows', '4');
    originalTextArea.setAttribute('cols', '30');
    var modifiedTextArea = document.createElement('textarea');
    modifiedTextArea.id = "modifiedTextArea";
    modifiedTextArea.value = modifiedContents;
    modifiedTextArea.setAttribute('rows', '4');
    modifiedTextArea.setAttribute('cols', '30');
    var downloadLink = document.createElement('a');
    downloadLink.href = '#';
    downloadLink.download = modifiedFilename;
    downloadLink.textContent = 'Download zzz_ CSV (run first)';
    downloadLink.addEventListener('click', function() {
      var blob = new Blob([modifiedContents], { type: 'text/csv' });
      downloadLink.href = URL.createObjectURL(blob);
    });
  
    var downloadLink2 = document.createElement('a');
    downloadLink2.href = '#';
    downloadLink2.download = originalFilename;
    downloadLink2.textContent = 'Download real CSV (run second)';
    downloadLink2.addEventListener('click', function() {
      var blob = new Blob([originalContents], { type: 'text/csv' });
      downloadLink2.href = URL.createObjectURL(blob);
    });
  

    outputContainer.innerHTML = '';        
    outputContainer.appendChild(downloadLink);
    outputContainer.appendChild(document.createElement('br'));
    outputContainer.appendChild(downloadLink2);
    

    outputContainer.appendChild(document.createElement('p')).textContent = 'Original CSV:';
    outputContainer.appendChild(originalTextArea);
    outputContainer.appendChild(document.createElement('p')).textContent = 'Modified CSV:';
    outputContainer.appendChild(modifiedTextArea);
  }
  






  //functions for copying:
  function copyPlainTextToClipboard() {
    const yourName = "Tommy"
    
    const helloPhrases = [
      "Hello",
      "Hi",
      "Greetings",
      "Hey there",
      "Salutations",
      "Good day",
      "Hey"
    ];

    const randomHello = helloPhrases[Math.floor(Math.random() * helloPhrases.length)];
    
    const thankYouPhrases = [
      "Thank you",
      "Thanks",
      "Much appreciated",
      "Many thanks",
      "Thank you kindly",
      "Thanks a bunch",
      "Thanks a lot",
      "Thank you so much"
    ];

    const randomThankYou = thankYouPhrases[Math.floor(Math.random() * thankYouPhrases.length)];
    
    const textToCopy = `${randomHello}!

I've updated the usernames associated with this task. Essentially what this means is that for some reason you either had two usernames, a username which was incorrect, or simply needed to update a username.

Your old username was: ${oldId}. Do not login with this username again. You should now login with: ${newId}. Sometimes it's helpful to view the page in incognito mode. If you have a session stored, it can cause this username swap to fail.

Could I get a confirmation that ${newId} is able to now login?

${randomThankYou}!
${yourName}`;

    navigator.clipboard.writeText(textToCopy)
      .then(() => {
        displayToast("Copy success!", `${oldId} ➡️ ${newId}`);
      })
      .catch((error) => {
        console.error("Error copying text: ", error);
      });
    
    const htmlMessage = document.getElementById("outputST");
    
    const htmlToDisplay = `<html>
<head>
<style>
  .bold {
    font-weight: bold;
  }
</style>
</head>
<body>
<p>${randomHello}!</p>

<p>I've updated the usernames associated with this task. Essentially what this means is that for some reason you either had two usernames, a username which was incorrect, or simply needed to update a username.</p>

<p>Your old username was: <span class="bold">${oldId}</span>. Do not login with this username again. You should now login with: <span class="bold">${newId}</span>. <span class="bold">Sometimes it's helpful to view the page in incognito mode</span>. If you have a session stored, it can cause this username swap to fail.</p>

<p>Could I get a confirmation that <span class="bold">${newId}</span> is able to now login?</p>

<p>${randomThankYou}!</p>
<p>${yourName}</p>
</body>
</html>`;

    htmlMessage.innerHTML = htmlToDisplay;
  }

  function displayToast(message, details) {
    const toastContainer = document.getElementById("toastContainer");
    const toast = document.createElement("div");
    toast.classList.add("toast");
    toast.innerText = `${message} (${details})`;
    toastContainer.appendChild(toast);
    setTimeout(() => {
      toast.classList.add("show");
      setTimeout(() => {
        toast.classList.remove("show");
        setTimeout(() => {
          toastContainer.removeChild(toast);
        }, 300);
      }, 4000);
    }, 10);
  }


  //funtions for the csv to table:
  function convertTextAreaToTable(textareaId) {
    const originalTextarea = document.getElementById(textareaId);
    const text = originalTextarea.value.trim();

    if (text.length === 0) {
      return;
    }

    const lines = text.split("\n");
    const rows = [];

    for (let line of lines) {
      const columns = line.split(",");
      rows.push(columns);
    }

    const table = document.createElement("table");

    // Create table header
    const headerRow = document.createElement("tr");

    for (let cell of rows[0]) {
      const th = document.createElement("th");
      th.textContent = cell;
      headerRow.appendChild(th);
    }

    table.appendChild(headerRow);

    // Create table rows
    for (let i = 1; i < rows.length; i++) {
      const dataRow = document.createElement("tr");

      for (let cell of rows[i]) {
        const td = document.createElement("td");
        td.textContent = cell;
        dataRow.appendChild(td);
      }

      table.appendChild(dataRow);
    }

    const parentElement = originalTextarea.parentNode;
    parentElement.replaceChild(table, originalTextarea);
  }