// Debug variables
let debugDistance = null; // Debug variable for the distance of a move
let debugSpeed = null; // Debug variable for the speed of a move
let debugRestMin = null; // Debug variable for the minimum rest time between moves
let debugRestMax = null; // Debug variable for the maximum rest time between moves
let debugVisuals = false; // Debug variable for visualizing the next moves

// Get the squirrel and container elements
const squirrel = document.getElementById('squirrel');
const squirrelContainer = document.getElementById('squirrel-container');

// Add the animation class to the squirrel
squirrel.classList.add('animate-squirrel');

// Speeds for the movements
const speeds = [1, 3, 5]; // slow, medium, fast

// Maximum right position for the squirrel
const maxRight = squirrelContainer.offsetWidth - squirrel.offsetWidth; // maximum 'right' value to not exceed the container

// Queue for next 5 moves
const moveQueue = [];

// Array for debug elements
const debugElements = [];

for (let i = 0; i < 5; i++) {
  const debugElement = document.createElement('div');
  debugElement.style.position = 'absolute';
  debugElement.style.bottom = '50px';
  debugElement.style.width = '30px';
  debugElement.style.height = '30px';
  debugElement.style.color = 'black';
  debugElement.style.backgroundColor = 'rgba(255, 255, 255, 0.5)'; // white with half transparency
  debugElement.style.textAlign = 'center';
  debugElement.style.lineHeight = '30px';
  debugElement.style.borderRadius = '15px';
  debugElement.innerText = i + 1;
  squirrelContainer.appendChild(debugElement);
  debugElements.push(debugElement);
}

// Function to generate a move
function generateMove() {
  const point = debugDistance ?? Math.round(Math.pow(Math.random(), 2) * maxRight);
  const speed = debugSpeed ?? speeds[Math.floor(Math.random() * speeds.length)];
  const restTime = debugRestMin && debugRestMax ? Math.round(Math.random() * (debugRestMax - debugRestMin) + debugRestMin) : Math.round(Math.random() * 25 + 5) * 1000; // 5 to 30 seconds

  return { point, speed, restTime };
}

// Function to visualize the next moves
function visualizeMoves() {
  if (!debugVisuals) {
    debugElements.forEach((element) => (element.style.display = 'none'));
    return;
  }

  debugElements.forEach((element, i) => {
    if (moveQueue[i]) {
      element.style.display = 'block';
      element.style.right = `${moveQueue[i].point}px`;
    } else {
      element.style.display = 'none';
    }
  });
}

// Function to move the squirrel
function moveSquirrel() {
  const move = moveQueue.shift();

  // Calculate new position
  const currentPosition = parseFloat(squirrel.style.right || 0);
  const newRight = Math.min(maxRight, move.point);

  // Adjust squirrel CSS class for direction
  if (newRight < currentPosition) {
    squirrel.classList.add('flip');
  } else {
    squirrel.classList.remove('flip');
  }

  // Start animation
  squirrel.style.animationPlayState = 'running';

  // Transition to new position
  squirrel.style.transition = `right ${move.speed}s linear`;
  squirrel.style.right = `${newRight}px`;

  console.log(`Moving squirrel to point ${newRight}px with speed ${move.speed}s`);

  // Stop animation after transition
  setTimeout(() => {
    squirrel.style.animationPlayState = 'paused';
    console.log(`Squirrel will wait for ${move.restTime / 1000} seconds`);

    // Schedule next movement and generate next move
    setTimeout(() => {
      if (moveQueue.length < 5) {
        moveQueue.push(generateMove());
      }
      visualizeMoves();
      moveSquirrel();
    }, move.restTime);
  }, move.speed * 1000);
}

// Start moving
for (let i = 0; i < 5; i++) {
  moveQueue.push(generateMove());
}
visualizeMoves();
moveSquirrel();

//timer for taskbar.
function updateTime() {
  const timeElement = document.getElementById('time');
  const now = new Date();
  const hours = String(now.getHours()).padStart(2, '0');
  const minutes = String(now.getMinutes()).padStart(2, '0');
  const seconds = String(now.getSeconds()).padStart(2, '0');
  timeElement.textContent = `${hours}:${minutes}:${seconds}`;
}

setInterval(updateTime, 1000);
updateTime();
