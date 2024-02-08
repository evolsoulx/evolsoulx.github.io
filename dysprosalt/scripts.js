let jsonData = []; // Global variable to hold the JSON data
let testout;
let tier1Name = "";
let tier2Name = "";
let tier3Name = "";
let tier4Name = "";
let tier5Name = "";
let ip="";
var numTiers = 0;
function openTheFile(event)
{
    const file = event.target.files[0];
    Papa.parse(file, {
        header: true, // Treat the first row as headers
        complete: function(results) {
            jsonData = results.data; // Convert CSV data to JSON
            console.log(jsonData);
            displayTable(jsonData);
            validateData(jsonData);
            generateDynamicDropdown(jsonData);
            generateDDCode(jsonData);
        }
    });
}

document.getElementById('csvFileInput').addEventListener('change', (event) => {
    openTheFile(event)});

    
let errorRows = [];
function displayTable(data) {
    const table = document.createElement('table');
    const thead = document.createElement('thead');
    const tbody = document.createElement('tbody');

    // Create table header
    const headerRow = document.createElement('tr');
    const rowNumHead = document.createElement('th');
    rowNumHead.textContent = "#";
    headerRow.appendChild(rowNumHead);

    if (data.length > 0) {
        Object.keys(data[0]).forEach(header => {
            const th = document.createElement('th');
            th.textContent = header;
            headerRow.appendChild(th);
        });
    }
    thead.appendChild(headerRow);

    // Create table body
    let rowCount = 1;
    data.forEach((row, rowIndex) => {
        const tr = document.createElement('tr');
        const rownumtd = document.createElement('td');
        rownumtd.textContent = rowIndex;
        rowCount++;
        tr.appendChild(rownumtd);

        Object.values(row).forEach(cell => {

            const td = document.createElement('td');
            td.textContent = cell;
            tr.appendChild(td);
        });
        tbody.appendChild(tr);

        // Highlight the row if it is invalid
        if (!isRowValid(row)) {
            tr.style.backgroundColor = 'red'; // Highlight the entire row
            errorRows.push(rowIndex);
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

       
    if (Object.keys(jsonData[0])[0]) {tier1Name = Object.keys(jsonData[0])[0];}
    if (Object.keys(jsonData[0])[2]) {tier2Name = Object.keys(jsonData[0])[2];}
    if (Object.keys(jsonData[0])[4]) {tier3Name = Object.keys(jsonData[0])[4];}
    if (Object.keys(jsonData[0])[6]) {tier4Name = Object.keys(jsonData[0])[6];}
    if (Object.keys(jsonData[0])[8]) {tier5Name = Object.keys(jsonData[0])[8];}
    let errorText = "The Following Rows are invalid: " + errorRows.toString()+". Please check the rows around these rows for multiple pairs of values on one line. There is a small chance the rows are slightly off if the client has many blank lines in their file.";
    let validText = 'File is a valid '+parseInt(numTiers/2)+' tiered dynamic dropdown.'
    statusElement.textContent = isValidFile ? validText : errorText;
    statusElement.style.color = isValidFile ? 'green' : 'red';
}


function generateDynamicDropdown(data) {
    // Example: Assume each row in the data has a 'category' and 'subcategory' field
    let categories = {};
    testout = data;
    console.log("data: "+data)
    data.forEach(row => {
//time to do the data.


    });
}