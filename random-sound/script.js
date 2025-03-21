document.addEventListener('DOMContentLoaded', () => {
    let gamesData = [];
  
    // Load the JSON game list
    fetch('data/games.json')
      .then(response => response.json())
      .then(data => {
        gamesData = data;
        initialize();
      })
      .catch(err => console.error('Error loading games data:', err));
  
    function getUrlParams() {
      const params = new URLSearchParams(window.location.search);
      return {
        gameA: params.get('a'),
        gameB: params.get('b')
      };
    }
  
    function updateUrlParams(a, b) {
      const params = new URLSearchParams();
      params.set('a', a);
      params.set('b', b);
      const newUrl = window.location.pathname + '?' + params.toString();
      history.pushState(null, '', newUrl);
    }
  
    function getRandomIndex(excludeIndex) {
      let index;
      do {
        index = Math.floor(Math.random() * gamesData.length);
      } while (index === excludeIndex);
      return index;
    }
  
    function initialize() {
      const params = getUrlParams();
      let indexA = parseInt(params.gameA, 10);
      let indexB = parseInt(params.gameB, 10);
  
      if (isNaN(indexA) || indexA < 0 || indexA >= gamesData.length) {
        indexA = Math.floor(Math.random() * gamesData.length);
      }
      if (isNaN(indexB) || indexB < 0 || indexB >= gamesData.length || indexB === indexA) {
        indexB = getRandomIndex(indexA);
      }
  
      displayGames(indexA, indexB);
      updateUrlParams(indexA, indexB);
    }
  
    function displayGames(indexA, indexB) {
      const gameA = gamesData[indexA];
      const gameB = gamesData[indexB];
  
      // Game A elements
      const gameAImageEl = document.getElementById('gameAImage');
      const gameATitleEl = document.getElementById('gameATitle');
      const gameAInfoEl = document.getElementById('gameAInfo');
  
      // Set fallback if image fails to load
      gameAImageEl.onerror = () => {
        gameAImageEl.src = 'images/placeholder.png';
      };
      gameAImageEl.src = gameA.image || 'images/placeholder.png';
      gameATitleEl.textContent = gameA.title;
      gameAInfoEl.textContent = `${gameA.console} - ${gameA.year}`;
  
      // Game B elements
      const gameBImageEl = document.getElementById('gameBImage');
      const gameBTitleEl = document.getElementById('gameBTitle');
      const gameBInfoEl = document.getElementById('gameBInfo');
  
      gameBImageEl.onerror = () => {
        gameBImageEl.src = 'images/placeholder.png';
      };
      gameBImageEl.src = gameB.image || 'images/placeholder.png';
      gameBTitleEl.textContent = gameB.title;
      gameBInfoEl.textContent = `${gameB.console} - ${gameB.year}`;
    }
  
    document.getElementById('randomizeBtn').addEventListener('click', () => {
      const indexA = Math.floor(Math.random() * gamesData.length);
      const indexB = getRandomIndex(indexA);
      displayGames(indexA, indexB);
      updateUrlParams(indexA, indexB);
    });
  });
  