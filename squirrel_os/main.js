const tmi = require('tmi.js');

const channelName = 'squirrelville';
const chatMessages = document.getElementById('chat-messages');

// Connect to Twitch Chat
const chatClient = new tmi.Client({
  channels: [channelName]
});

chatClient.connect();

// Handle chat messages
chatClient.on('message', (channel, tags, message, self) => {
  if (!self) {
    // Create chat bubble
    const bubble = document.createElement('div');
    bubble.classList.add('chat-bubble');
    bubble.innerText = `${tags['display-name']}: ${message}`;

    chatMessages.appendChild(bubble);

    // Fade out after 5 seconds
    setTimeout(() => {
      bubble.style.opacity = 0;
      setTimeout(() => {
        bubble.remove();
      }, 500);
    }, 5000);
  }
});
