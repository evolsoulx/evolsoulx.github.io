function runAnimation() {
    const squirrel = document.querySelector('#squirrel');
    squirrel.classList.add('animate-squirrel'); // Add the animation class to the squirrel element
    
    const delay = Math.floor(Math.random() * (maxDelay - minDelay + 1)) + minDelay; // Generate a random delay between minDelay and maxDelay (in seconds)

    setTimeout(() => {
      squirrel.classList.remove('animate-squirrel'); // Remove the animation class from the squirrel element
      const nextDelay = Math.floor(Math.random() * (maxDelay - minDelay + 1)) + minDelay; // Generate the delay for the next animation loop
      setTimeout(runAnimation, nextDelay * 1000); // Run the animation loop again with the next delay
    }, animationDuration * 1000); // Set a timeout to remove the animation class after the animation duration (in seconds)
  }

  const minDelay = 1; // The minimum delay for the animation loop (in seconds)
  const maxDelay = 10; // The maximum delay for the animation loop (in seconds)
  const animationDuration = 1; // The duration of the animation (in seconds)

  runAnimation(); // Start the animation loop


  // Get the squirrel element
const squirrel = document.querySelector('#squirrel');

// Get the initial position of the squirrel from local storage (if it exists)
const storedSquirrelPosition = localStorage.getItem('squirrelPosition');
if (storedSquirrelPosition) {
  const { left, top } = JSON.parse(storedSquirrelPosition);
  squirrel.style.left = `${left}px`;
  squirrel.style.top = `${top}px`;
}

// Set up mouse event listeners
let isDragging = false;
let mouseOffset = { x: 0, y: 0 };
squirrel.addEventListener('mousedown', (event) => {
  isDragging = true;
  const squirrelRect = squirrel.getBoundingClientRect();
  mouseOffset.x = event.clientX - squirrelRect.left;
  mouseOffset.y = event.clientY - squirrelRect.top;
});

document.addEventListener('mousemove', (event) => {
  if (isDragging) {
    const squirrelContainerRect = squirrel.parentElement.getBoundingClientRect();
    const squirrelWidth = squirrel.offsetWidth;
    const squirrelHeight = squirrel.offsetHeight;
    let left = event.clientX - mouseOffset.x - squirrelContainerRect.left;
    let top = event.clientY - mouseOffset.y - squirrelContainerRect.top;

    // Clamp the squirrel position to within the container
    if (left < 0) {
      left = 0;
    } else if (left + squirrelWidth > squirrelContainerRect.width) {
      left = squirrelContainerRect.width - squirrelWidth;
    }
    if (top < 0) {
      top = 0;
    } else if (top + squirrelHeight > squirrelContainerRect.height) {
      top = squirrelContainerRect.height - squirrelHeight;
    }

    squirrel.style.left = `${left}px`;
    squirrel.style.top = `${top}px`;
  }
});

document.addEventListener('mouseup', (event) => {
  isDragging = false;
  const squirrelPosition = { left: squirrel.offsetLeft, top: squirrel.offsetTop };
  localStorage.setItem('squirrelPosition', JSON.stringify(squirrelPosition));
});



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
