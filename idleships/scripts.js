document.addEventListener("DOMContentLoaded", () => {
    const playerGrid = document.getElementById("player-grid");
    const opponentGrid = document.getElementById("opponent-grid");
    const startButton = document.getElementById("start-button");

    const gridSize = 9;
    let playerBoard = generateBoard(gridSize);
    let opponentBoard = generateBoard(gridSize);

    // Function to generate an empty game board with headers
function generateBoard(size) {
    const board = [];
    
    // Create the top header row with column letters (A, B, C, ...)
    const topHeaderRow = [" "];
    for (let j = 0; j < size; j++) {
        topHeaderRow.push(String.fromCharCode(65 + j)); // Convert ASCII to letters
    }
    board.push(topHeaderRow);

    // Create the main game board with rows (1, 2, 3, ...) and empty cells
    for (let i = 0; i < size; i++) {
        const row = [i + 1]; // Use numbers for left side headers
        for (let j = 0; j < size; j++) {
            row.push("");
        }
        board.push(row);
    }

    return board;
}


    // Function to render the game board
    function renderBoard(grid, board) {
        grid.innerHTML = "";
        for (let i = 0; i < gridSize; i++) {
            for (let j = 0; j < gridSize; j++) {
                const cell = document.createElement("div");
                cell.className = "grid-cell " + String.fromCharCode(64 + j) + "-"+i;
                cell.textContent = board[i][j];
                
                grid.appendChild(cell);
            }
        }
    }

    // Event listener for the "Start Game" button
    startButton.addEventListener("click", () => {
        // Generate and render player and opponent boards
        playerBoard = generateBoard(gridSize);
        opponentBoard = generateBoard(gridSize);
        renderBoard(playerGrid, playerBoard);
        renderBoard(opponentGrid, opponentBoard);
    });

    // Initial rendering of empty boards
    renderBoard(playerGrid, playerBoard);
    renderBoard(opponentGrid, opponentBoard);
});
