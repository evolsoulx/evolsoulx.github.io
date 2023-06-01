// Debug variables
console.log('script.js')
let debugDistance = null; // Debug variable for the distance of a move
let debugSpeed = null; // Debug variable for the speed of a move
let debugRestMin = null; // Debug variable for the minimum rest time between moves
let debugRestMax = null; // Debug variable for the maximum rest time between moves
// Function to get the value of a URL parameter
function getUrlParameter(parameter) {
  const urlParams = new URLSearchParams(window.location.search);
  return urlParams.get(parameter);
}

function getRandomColor() {
  const hue = Math.floor(Math.random() * 360); 
  const color = `hsl(${hue}, 100%, 50%)`;
  return color;
}

// Function to generate a squirrel for a user
function generateSquirrel(username, color) {
    // Create a new squirrel element
    const squirrel = document.createElement('div');
    squirrel.classList.add('squirrel');

    // Create a name element
    const nameElement = document.createElement('div');
    nameElement.classList.add('squirrel-name');
    nameElement.textContent = username;
    nameElement.style.backgroundColor = color;

    squirrel.appendChild(nameElement);
    const sprite = document.createElement('div');
    sprite.classList.add('sprite');

    // Add the squirrel to the container
    squirrelContainer.appendChild(squirrel);
    squirrel.appendChild(sprite)
    // Add the animation class to the squirrel
    sprite.classList.add('animate-squirrel');
    // Speeds for the movements
    const speeds = [15, 5, 10]; // slow, medium, fast

    // Maximum right position for the squirrel
    const maxRight = squirrelContainer.offsetWidth - squirrel.offsetWidth; // maximum 'right' value to not exceed the container

    // Queue for next 5 moves
    const moveQueue = [];


    // Function to generate a move
    function generateMove() {

        let randomNumber = Math.random();
        let timeInMilliseconds;

        if (randomNumber < 0.001) {
            console.log('instant!');
        // 0.1% chance of instant result
        timeInMilliseconds = 1;
        } else {
        // 99.9% chance of generating time between 5 seconds and 5 minutes
         timeInMilliseconds = Math.round(Math.random() * 295 + 5) * 1000;
        }
        const point = debugDistance ?? Math.round(Math.pow(Math.random(), 2) * maxRight);
        const speed = debugSpeed ?? speeds[Math.floor(Math.random() * speeds.length)];
        const restTime = debugRestMin && debugRestMax ? Math.round(Math.random() * (debugRestMax - debugRestMin) + debugRestMin) : timeInMilliseconds; // 5 to 30 seconds

        return {
            point,
            speed,
            restTime
        };
    }

    // Function to move the squirrel
    function moveSquirrel() {
        const move = moveQueue.shift();

        // Calculate new position
        const currentPosition = parseFloat(squirrel.style.right || 0);
        const newRight = Math.min(maxRight, move.point);

        // Adjust squirrel CSS class for direction
        if (newRight < currentPosition) {
            sprite.classList.add('flip');
        } else {
           sprite.classList.remove('flip');
        }

        // Start animation
        sprite.style.animationPlayState = 'running';

        // Transition to new position
        squirrel.style.transition = `right ${move.speed}s linear`;
        squirrel.style.right = `${newRight}px`;

        console.log(`Moving ${username}'s squirrel to point ${newRight}px with speed ${move.speed}s`);

        // Stop animation after transition
        setTimeout(() => {
          sprite.style.animationPlayState = 'paused';
            console.log(`Squirrel will wait for ${move.restTime / 1000} seconds`);

            // Schedule next movement and generate next move
            setTimeout(() => {
                if (moveQueue.length < 2) {
                    moveQueue.push(generateMove());
                }
                moveSquirrel();
            }, move.restTime);
        }, move.speed * 1000);
    }

    // Start moving
    for (let i = 0; i < 2; i++) {
        moveQueue.push(generateMove());
    }
    moveSquirrel();
}

function updateColor(user, newColor) {
    const userIndex = users.findIndex(u => u.username === user);
    if (userIndex !== -1) {
      users[userIndex].color = newColor;
      localStorage.setItem('#'+channel.toString()+'_users', JSON.stringify(users));
    }
  
    // Refresh the color in the squirrel name
    const squirrels = document.querySelectorAll('.squirrel');
    for (const squirrel of squirrels) {
      const nameElement = squirrel.querySelector('.squirrel-name');
      if (nameElement.textContent === user) {
        nameElement.style.backgroundColor = newColor;
        console.log('Squirrel name color refreshed');
        break; // Exit the loop after finding the matching squirrel
      }
    }
  }
    

//timer for taskbar.
function updateTime() {
    const timeElement = document.getElementById('time');
    const now = new Date();
    const hours = String(now.getHours()).padStart(2, '0');
    const minutes = String(now.getMinutes()).padStart(2, '0');
    const seconds = String(now.getSeconds()).padStart(2, '0');
    timeElement.textContent = `${hours}:${minutes}:${seconds}`;
}

// Get the value of the "channel" parameter or set a default value
const channel = getUrlParameter('channel') || 'squirrelville';
console.log(channel.toString()+'_users')
// Get the squirrel container element
const squirrelContainer = document.getElementById('squirrel-container');
// Load existing users from local storage or initialize an empty array
var users = JSON.parse(localStorage.getItem('#'+channel.toString()+'_users')) || [];
console.log(users)
// Function to generate a random color

// Get the current timestamp
const currentTimestamp = Date.now();

// Iterate over the users
users.forEach((user) => {
    console.log(user)
    // Check if the user's last message is within the last 60 minutes
    const lastMessageTimestamp = new Date(user.lastMessageTime).getTime();
        //eventually add limits here
    generateSquirrel(user.username, user.color);
});



setInterval(updateTime, 1000);
updateTime();


// Create a new instance of the Twitch client
const client = new tmi.Client({
    connection: {
        secure: true,
        reconnect: true,
    },
    channels: [channel],
});

// Function to handle chat messages
function handleChatMessage(username, message) {
    const squirrels = document.querySelectorAll('.squirrel');
    for (const squirrel of squirrels) {
        const nameElement = squirrel.querySelector('.squirrel-name');
        if (nameElement.textContent === username) {
            const chatBubble = document.createElement('div');
            chatBubble.classList.add('chat-bubble');
            chatBubble.textContent = "+1";
            squirrel.appendChild(chatBubble);

            // Remove the chat bubble after a certain duration (e.g., 5 seconds)
            setTimeout(() => {
                chatBubble.remove();
            }, 5000);

            break; // Exit the loop after finding the matching squirrel
        }
    }

    if(message.indexOf('!color') != -1)
    {
        try{
            updateColor(username, message.split(" ")[1]);
        } catch(e){console.log(e);}
    }
}
// Listen for the connection event
client.on('connected', (address, port) => {
    console.log(`Connected to ${address}:${port}`);
});

// Listen for the chat messages
client.on('message', (channel, tags, message, self) => {
    if (self) return; // Ignore messages sent by the bot itself

    // Extract relevant information
    const username = tags.username;
    const time = new Date().toISOString();
    const color = users.find(user => user.username === username)?.color || getRandomColor();

    // Update the user or add a new user to the local storage
    const userIndex = users.findIndex(user => user.username === username);

    if (userIndex !== -1) {
        users[userIndex].lastMessageTime = time;
    } else {
        users.push({
            username,
            lastMessageTime: time,
            color,
        });
        generateSquirrel(username, color);

    }

    // Save the updated users to the local storage
    localStorage.setItem(channel.toString()+'_users', JSON.stringify(users));

    // Log the chat message
    const chatMessage = {
        time,
        username,
        message,
    };

    // Handle the chat message
    handleChatMessage(username, message);
    console.log(JSON.stringify(chatMessage));
});

// Listen for the error event
client.on('error', (error) => {
    console.error(`Error: ${error}`);
});

// Connect the client to Twitch chat
client.connect().catch((error) => {
    console.error(`Failed to connect to chat: ${error}`);
});