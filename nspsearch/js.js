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
                if(storyTitle.indexOf(seasonNumber) != -1)
                {
                    
                html += `
                <article>

                <h2>${storyTitle}</h2>
                Date: ${el.querySelector('pubDate').innerHTML}<br/>
                ${el.querySelector('description').innerHTML}
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


