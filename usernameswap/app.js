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
    }
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
    originalTextArea.value = originalContents;
    originalTextArea.setAttribute('rows', '4');
    originalTextArea.setAttribute('cols', '30');
    var modifiedTextArea = document.createElement('textarea');
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


    outputContainer.appendChild(document.createElement('hr'));
    outputContainer.appendChild(document.createElement('p')).textContent = 'Original CSV:';
    outputContainer.appendChild(originalTextArea);
    outputContainer.appendChild(document.createElement('hr'));
    outputContainer.appendChild(document.createElement('p')).textContent = 'Modified CSV:';
    outputContainer.appendChild(modifiedTextArea);
  }
  
