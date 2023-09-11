// Function to get the value of a URL parameter
function getUrlParameter(parameter) {
    const urlParams = new URLSearchParams(window.location.search);
    return urlParams.get(parameter);
  }
const channels = (getUrlParameter('channels') || 'squirrelville,crittervision').split(',');

// Object to store messages for each channel
const channelLogs = {};
channels.forEach(channel => {
    channelLogs["#"+channel] = 0;
});

if(getUrlParameter('db'))
{
const channelsRef = database.ref('channels');

channelsRef.once('value', (snapshot) => {
    const data = snapshot.val();
    
    // Initialize channelLogs with data from Firebase
    Object.keys(data).forEach((channelName) => {
        channelLogs["#"+channelName] = data[channelName];
    });

    // Now, channelLogs is populated with data from Firebase
    console.log(channelLogs);

    const { active, inactive } = getChannelsWithinLastHour();

    // Update the display for active channels
    updateChannelDisplay(active, 'active-channels-container');

    // Update the display for inactive channels
    updateChannelDisplay(inactive, 'inactive-channels-container');

});



}

// Update channelLogs object
function updateChannelLogs(channelName, timestamp) {
    channelLogs[channelName] = timestamp;

    // Update data in Firebase Realtime Database
    const updates = {};
    updates[`channels/${channelName.slice(1)}`] = timestamp;

    // Perform the update in Firebase
    return database.ref().update(updates);
}

// Function to log messages for a channel
function logMessage(channel, message) {
    const nowish = Date.now();
    if (!channelLogs[channel]) {
        channelLogs[channel] = 0;
    }
    console.log(updateChannelLogs(channel, nowish));
}

// Function to get channels with messages in the last x seconds
function getActiveChannels() {
    const channelArray = Object.entries(channelLogs);
    channelArray.sort((a, b) => b[1] - a[1]);
    const sortedChannelData = Object.fromEntries(channelArray);
    //console.log(sortedChannelData);
}


// Create a new instance of the Twitch client
const client = new tmi.Client({
    connection: {
        secure: true,
        reconnect: true,
    },
    channels: channels.map(channel => `#${channel}`),
});

// Listen for the connection event
client.on('connected', (address, port) => {
    console.log(`Connected to ${address}:${port}`);
});

// Listen for the chat messages
client.on('message', (channel, tags, message, self) => {
    //console.log("chat message from: " + channel + " - " + message);
    if (self) return; // Ignore messages sent by the bo itself

    logMessage(channel, message);

});

// Listen for the error event
client.on('error', (error) => {
    console.error(`Error: ${error}`);
});

// Connect the client to Twitch chat
client.connect().catch((error) => {
    console.error(`Failed to connect to chat: ${error}`);
});

function getChannelsWithinLastHour() {
    const currentTimestamp = Date.now();
    const oneHourAgo = currentTimestamp - 3600000; // 3600000 milliseconds = 1 hour

    const activeChannels = {};
    const inactiveChannels = {};

    for (const [channel, timestamp] of Object.entries(channelLogs)) {
        if (timestamp >= oneHourAgo) {
            activeChannels[channel] = timestamp;
        } else {
            inactiveChannels[channel] = timestamp;
        }
    }

    return { active: activeChannels, inactive: inactiveChannels };
}


function updateChannelDisplay(channels, containerId) {
    const container = document.getElementById(containerId);
    container.innerHTML = ''; // Clear the container

    for (const [channel, timestamp] of Object.entries(channels)) {
        const div = document.createElement('div');
        div.classList.add('channel-div');

        // Link to the channel
        const channelLink = document.createElement('a');
        channelLink.href = `https://www.twitch.tv/${channel.slice(1)}`;
        channelLink.textContent = channel;
        div.appendChild(channelLink);

        container.appendChild(div);
    }
}

//some stuff for db connection
const channelRef = database.ref('channels'); // 'channels' can be the path where you want to store the data
channelRef.on('value', (snapshot) => {
    // Handle the updated data hereS
    const data = snapshot.val();
//    console.log(data);
});

setInterval(() => {
    const { active, inactive } = getChannelsWithinLastHour();

    // Update the display for active channels
    updateChannelDisplay(active, 'active-channels-container');

    // Update the display for inactive channels
    updateChannelDisplay(inactive, 'inactive-channels-container');
}, 1000);