let currentWord = '';
const correctWord = 'BEAR'; // This can be set dynamically in a real game
let startTime;
let score = 1000; // Start score
let timerInterval;
let wordList = new Set();

document.addEventListener('DOMContentLoaded', function() {
    loadWordList();
});

function startGame() {
    document.getElementById('startButton').style.display = 'none'; // Hide start button
    document.querySelectorAll('.lock-display, .submit-btn').forEach(el => el.style.display = 'block'); // Show game controls
    console.log("Game started");
    startTimer();
}

function startTimer() {
    startTime = new Date();
    console.log("Timer started at", startTime);
    timerInterval = setInterval(function() {
        const now = new Date();
        const elapsed = Math.floor((now - startTime) / 1000);
        document.getElementById('timerDisplay').innerText = `Time: ${elapsed}s`;
        if (score > 0) {
            score--;
            document.getElementById('scoreDisplay').innerText = `Score: ${score}`;
        }
        console.log("Timer tick:", elapsed, "seconds elapsed, score:", score);
    }, 1000);
}

function stopTimer() {
    clearInterval(timerInterval);
    console.log("Timer stopped");
}

function loadWordList() {
    fetch('wordlist.txt')
        .then(response => {
            console.log("Word list fetched successfully.");
            return response.text();
        })
        .then(data => {
            wordList = new Set(data.split('\n').map(word => word.trim().toUpperCase()));
            console.log("Word list loaded and processed:", Array.from(wordList));
        })
        .catch(error => console.error('Failed to load word list:', error));
}

function updateWord() {
    let tumbler1 = document.getElementById('tumbler1').value;
    let tumbler2 = document.getElementById('tumbler2').value;
    let tumbler3 = document.getElementById('tumbler3').value;
    let tumbler4 = document.getElementById('tumbler4').value;
    currentWord = tumbler1 + tumbler2 + tumbler3 + tumbler4;
    console.log("Current word updated:", currentWord);
}

function submitWord() {
    stopTimer();
    console.log("Submitting word:", currentWord);
    if (wordList.has(currentWord) && currentWord.length > 0) {
        console.log("Word is valid.");
        let finalScore = calculateScore(currentWord, correctWord) + score;
        document.getElementById('scoreDisplay').innerText = `Valid word! Final Score: ${finalScore}`;
        console.log("Final score calculated:", finalScore);
    } else {
        console.log("Word is not valid.");
        document.getElementById('scoreDisplay').innerText = 'Not a valid word!';
    }
}

function calculateScore(guessedWord, correctWord) {
    console.log("Calculating score for guessed word:", guessedWord);
    let additionalScore = 0;
    for (let i = 0; i < guessedWord.length; i++) {
        if (guessedWord[i] === correctWord[i]) {
            additionalScore += 250;
            console.log(`Letter ${guessedWord[i]} at position ${i} is correct.`);
        }
    }
    return additionalScore;
}
