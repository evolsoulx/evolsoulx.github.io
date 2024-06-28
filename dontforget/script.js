const canvas = document.getElementById('gameCanvas');
const ctx = canvas.getContext('2d');
const tileSize = 40;
const playerSize = 20;
const playerColor = '#FF0000';
const selectionColors = ['#000000', '#00FF00', '#0000FF', '#FFFF00', '#FF00FF']; // Colors for each selection

let playerX = 50;
let playerY = 50;
let currentSelection = null; // Variable to store the current selection
let selectionItems = []; // Array to store placed selection items

// Basic enemy
let enemyBaseX = canvas.width - tileSize; // X-coordinate of the enemy base
let enemyBaseY = canvas.height - tileSize; // Y-coordinate of the enemy base
const enemyColor = getRandomColor();
let enemyX, enemyY;

// Generate random position for enemy base
do {
  enemyX = getRandomInt(0, canvas.width / tileSize - 1); // Random X-coordinate within the room
  enemyY = getRandomInt(0, canvas.height / tileSize - 1); // Random Y-coordinate within the room
} while (Math.abs((enemyX * tileSize) - playerX) < 8 * tileSize || Math.abs((enemyY * tileSize) - playerY) < 8 * tileSize);

function getRandomColor() {
  const letters = '0123456789ABCDEF';
  let color = '#';
  for (let i = 0; i < 6; i++) {
    color += letters[Math.floor(Math.random() * 16)];
  }
  return color;
}

function getRandomInt(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

function drawPlayer() {
  ctx.fillStyle = playerColor;
  ctx.fillRect(playerX, playerY, playerSize, playerSize);
}

function drawRoom(x, y, color) {
  ctx.fillStyle = color;
  ctx.fillRect(x * tileSize, y * tileSize, tileSize, tileSize);
}

function drawEnemyBase() {
  ctx.fillStyle = enemyColor;
  ctx.fillRect(enemyX * tileSize, enemyY * tileSize, tileSize, tileSize);
}

function processResource(color) {
  if (color === '#FF0000') {
    // Do something when processing red resource
    console.log('Processing red resource...');
  } else {
    // Do something for other colors
    console.log('Processing resource of different color...');
  }
}

function handlePlayerInput(event) {
  const key = event.key;
  switch (key) {
    case 'ArrowUp':
      if (playerY - tileSize >= 0) {
        playerY -= tileSize;
      }
      break;
    case 'ArrowDown':
      if (playerY + tileSize <= canvas.height - playerSize) {
        playerY += tileSize;
      }
      break;
    case 'ArrowLeft':
      if (playerX - tileSize >= 0) {
        playerX -= tileSize;
      }
      break;
    case 'ArrowRight':
      if (playerX + tileSize <= canvas.width - playerSize) {
        playerX += tileSize;
      }
      break;
    case 'x':
      dropItem();
      break;
    case 'e':
      eraseItem();
      break;
  }
}

function dropItem() {
  if (currentSelection !== null) {
    // Drop item based on current selection
    switch (currentSelection) {
      case 'selection1':
        // Drop conveyor tube for selection 1
        selectionItems.push({ x: playerX, y: playerY, type: 'conveyor' });
        break;
      // Add cases for other selections if needed
    }
  }
}

function eraseItem() {
  // Find and remove item at player's position
  for (let i = 0; i < selectionItems.length; i++) {
    const item = selectionItems[i];
    if (item.x === playerX && item.y === playerY) {
      selectionItems.splice(i, 1);
      break; // Exit loop after removing the item
    }
  }
}

function drawSelectionItems() {
  for (const item of selectionItems) {
    switch (item.type) {
      case 'conveyor':
        // Draw conveyor tube
        ctx.fillStyle = '#000000';
        ctx.fillRect(item.x, item.y+playerSize/2, playerSize, playerSize / 5); // Adjust size as needed
        break;
      // Add cases for other item types if needed
    }
  }
}

function handleSelection(event) {
  currentSelection = event.target.id; // Set the current selection to the id of the clicked button
}

function gameLoop() {
  ctx.clearRect(0, 0, canvas.width, canvas.height);
  drawEnemyBase(); // Draw the enemy base
  // Draw other game elements (rooms, conveyor belts, etc.)
  drawRoom(1, 1, '#CCCCCC'); // Example room
  drawSelectionItems(); // Draw selection items
  drawPlayer();
}

document.addEventListener('keydown', handlePlayerInput);
document.getElementById('selection1').addEventListener('click', handleSelection);
document.getElementById('selection2').addEventListener('click', handleSelection);
document.getElementById('selection3').addEventListener('click', handleSelection);
document.getElementById('selection4').addEventListener('click', handleSelection);
document.getElementById('selection5').addEventListener('click', handleSelection);

setInterval(gameLoop, 1000 / 60); // Game loop
