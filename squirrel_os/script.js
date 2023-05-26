const squirrel = document.getElementById('squirrel');
const container = document.getElementById('squirrel-container');
const speed = 5;
let dx = 0;

window.addEventListener('keydown', (event) => {
  if(event.key === "ArrowRight" || event.key === "ArrowLeft") {
    squirrel.style.animationPlayState = "running";
    dx = event.key === "ArrowRight" ? speed : -speed;
    if(event.key === "ArrowLeft") {
      squirrel.classList.add("flip");
    } else {
      squirrel.classList.remove("flip");
    }
  }
});

window.addEventListener('keyup', (event) => {
  if(event.key === "ArrowRight" || event.key === "ArrowLeft") {
    squirrel.style.animationPlayState = "paused";
    dx = 0;
  }
});

function animate() {
  const squirrelRect = squirrel.getBoundingClientRect();
  const containerRect = container.getBoundingClientRect();
  const nextX = squirrelRect.x + dx;
  if (nextX > containerRect.x + 10 && nextX < containerRect.x + containerRect.width - squirrelRect.width - 10) {
    squirrel.style.left = `${nextX}px`;
  }
  requestAnimationFrame(animate);
}


animate();

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
