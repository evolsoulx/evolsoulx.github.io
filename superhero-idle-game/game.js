// Select HTML elements
const form = document.querySelector('.hero-creator form');
const heroName = document.querySelector('#hero-name-display');
const heroColor = document.querySelector('#hero-color-display');
const heroImg = document.querySelector('#hero-img');
const fightButton = document.querySelector('#fight-btn');
const enemyHealth = document.querySelector('#enemy-health');
const heroHealth = document.querySelector('#hero-health');
const goldDisplay = document.querySelector('#gold-display');
const expDisplay = document.querySelector('#exp-display');

// Set initial game values
let hero = {};
let enemy = { h: 100, g: 10, e: 5 };
let running = false;

// Helper functions
function r(min, max) {
	return Math.floor(Math.random() * (max - min + 1)) + min;
}

function ud() {
	heroName.textContent = hero.n;
	heroColor.textContent = hero.c;
	heroImg.src = `https://via.placeholder.com/150/${hero.c.slice(1)}/FFFFFF?text=Hero`;
	heroHealth.textContent = hero.h;
}

function updateEnemy() {
	enemyHealth.textContent = enemy.h;
}

function updateResourceDisplays() {
	goldDisplay.textContent = enemy.g;
	expDisplay.textContent = enemy.e;
}

function resetEnemy() {
	enemy.h = 100;
	enemy.g = 10;
	enemy.e = 5;
	updateEnemy();
}

function createHero(event) {
	event.preventDefault();
	const heroNameInput = document.querySelector('#hero-name');
	const heroColorInput = document.querySelector('#hero-color');
	hero = {
		n: heroNameInput.value,
		c: heroColorInput.value,
		h: 100,
		d: 10,
		def: 5,
		g: 0,
		e: 0
	};
	ud();
	form.reset();
}

function fight() {
	if (!running) {
		running = true;
		let intervalId = setInterval(() => {
			// Hero attacks enemy
			let heroDamage = r(hero.d - 5, hero.d + 5);
			enemy.h -= heroDamage;
			updateEnemy();

			if (enemy.h <= 0) {
				// Enemy defeated
				clearInterval(intervalId);
				resetEnemy();
				enemy.g += r(5, 10);
				enemy.e += r(2, 5);
				updateResourceDisplays();
				running = false;
			} else {
				// Enemy attacks hero
				let enemyDamage = r(5, 15) - hero.def;
				if (enemyDamage < 0) {
					enemyDamage = 0;
				}
				hero.h -= enemyDamage;
				ud();
				if (hero.h <= 0) {
					// Hero defeated
					clearInterval(intervalId);
					resetEnemy();
					hero.h = 100;
					hero.g -= 10;
					ud();
					updateResourceDisplays();
					running = false;
				}
			}
		}, 1000);
	}
}

// Event listeners
form.addEventListener('submit', createHero);
fightButton.addEventListener('click', fight);
