let jsonData = []; // Global variable to hold the JSON data
let testout;

var numTiers = 0;


document.getElementById('csvFileInput').addEventListener('change', (event) => {
    const file = event.target.files[0];
    Papa.parse(file, {
        header: true, // Treat the first row as headers
        complete: function(results) {
            jsonData = results.data; // Convert CSV data to JSON
            console.log(jsonData);
            displayTable(jsonData);
            validateData(jsonData);
            generateDynamicDropdown(jsonData);
            
        }
    });
});



function displayTable(data) {
    const table = document.createElement('table');
    const thead = document.createElement('thead');
    const tbody = document.createElement('tbody');

    // Create table header
    const headerRow = document.createElement('tr');
    if (data.length > 0) {
        Object.keys(data[0]).forEach(header => {
            const th = document.createElement('th');
            th.textContent = header;
            headerRow.appendChild(th);
        });
    }
    thead.appendChild(headerRow);

    // Create table body
    data.forEach((row, rowIndex) => {
        const tr = document.createElement('tr');
        Object.values(row).forEach(cell => {
            const td = document.createElement('td');
            td.textContent = cell;
            tr.appendChild(td);
        });
        tbody.appendChild(tr);

        // Highlight the row if it is invalid
        if (!isRowValid(row)) {
            tr.style.backgroundColor = 'red'; // Highlight the entire row
        }
    });

    table.appendChild(thead);
    table.appendChild(tbody);
    document.getElementById('dataTable').innerHTML = ''; // Clear any previous data
    document.getElementById('dataTable').appendChild(table);
}

function isRowValid(row) {
    // Count populated cells in a row object
    let populatedCells = 0;
    Object.values(row).forEach(cell => {
        if (cell.trim() !== '') {
            populatedCells++;
        }
    });

    // Check if more than two cells are populated in the row
    return populatedCells <= 2;
}

function validateData(data) {
    let isValidFile = true;
    data.slice(1).forEach(row => {
        if (!isRowValid(row)) {
            isValidFile = false;
        }
    });

    const statusElement = document.getElementById('validationStatus');
    numTiers = Object.keys(jsonData[0]).length;
    statusElement.textContent = isValidFile ? 'File is a valid '+parseInt(numTiers/2)+' tiered dynamic dropdown.' : 'File is invalid. Please check highlighted rows.';
    statusElement.style.color = isValidFile ? 'green' : 'red';
}



function generateDynamicDropdown(data) {
    // Example: Assume each row in the data has a 'category' and 'subcategory' field
    let categories = {};
    testout = data;
    console.log("data: "+data)
    data.forEach(row => {
        if (row.category && row.subcategory) {
            if (!categories[row.category]) {
                categories[row.category] = [];
            }
            categories[row.category].push(row.subcategory);
        }
    });

    // Now create a dropdown menu based on categories
    let dropdown = '<select id="categorySelect">';
    for (let category in categories) {
        dropdown += `<optgroup label="${category}">`;
        categories[category].forEach(subcategory => {
            dropdown += `<option value="${subcategory}">${subcategory}</option>`;
        });
        dropdown += '</optgroup>';
    }
    dropdown += '</select>';

    document.getElementById('dataTable').insertAdjacentHTML('afterend', dropdown);
}
