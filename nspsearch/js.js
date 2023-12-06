//
var RSS_URL = 'https://nosleep.supercast.com/feeds/rne91aoPhrNb7kr7i8k3m6GJ';

document.getElementById('seasonSelect').addEventListener('change', function() {
    var seasonNumber = this.value; // This will be S01, S02, ..., S20

// Fetch the RSS feed and parse it
fetch(RSS_URL)
    .then(response => response.text())
    .then(str => new window.DOMParser().parseFromString(str, "text/xml"))
    .then(data => {
        console.log(data);
        const parser = new DOMParser();
        const xmlDoc = parser.parseFromString(data, "text/xml");

        const items = data.querySelectorAll("item");
        let html = ``;
        items.forEach(el=>
            {
                let storyTitle = el.querySelector('title').innerHTML;
                let storyDescription = el.querySelector('description').innerHTML;
                let storyDate = el.querySelector('pubDate').innerHTML;

                // Get all selected options from the multi-select
                let selectedSeasons = Array.from(document.getElementById('seasonSelect').selectedOptions).map(option => option.value);
            
                // Check if the story title includes any of the selected season numbers
                let isSeasonMatch = selectedSeasons.some(seasonNumber => storyTitle.includes(seasonNumber));

                if(isSeasonMatch)
                {
                    let modifyit = document.getElementById('editedContent').checked;
                    
                    if(modifyit)
                    {
                        //Remove fluff after stories for brevity
                        // Find the index where the specified text begins
let targetIndex = storyDescription.indexOf('Click here to ');

// Check if the text is found
if (targetIndex !== -1) {
    // Find the index of the opening <div> tag before the target text
    let divStartIndex = storyDescription.lastIndexOf('<div', targetIndex);

    // If an opening <div> tag is found
    if (divStartIndex !== -1) {
        // Extract everything before this <div> tag
        storyDescription = storyDescription.substring(0, divStartIndex);
    }
}




                    }


                html += `
                <article>

                <h2>${storyTitle}</h2>
                Date: ${storyDate}<br/>
                ${storyDescription}
                </article>
                `
                }
            })
            document.getElementById('results').innerHTML = html;
            //document.body.insertAdjacentHTML("beforeend", html);
    })
    .catch(error => {
        console.error('Error fetching the RSS feed:', error);
        document.getElementById('results').textContent = 'Error fetching the RSS feed. Please check the console for details.';
    });



});



