document.getElementById('add-hexagon-btn').addEventListener('click', addRingOfHexagons);

const container = document.getElementById('hexagon-container');
let hexagonLayers = 1; // Represents the current layer of hexagons

function addRingOfHexagons() {
  // If it's the first hexagon, just draw it at the center
  if (hexagonLayers === 1) {
    const hexagon = createHexagon(0, 0, 30);
    container.appendChild(hexagon);
  } else {
    // Calculate positions for a ring of hexagons
    const size = 30; // Size of the hexagon
    const distance = (size * 2) * (hexagonLayers - 1); // Distance from the center
    const sides = 6; // A hexagon has 6 sides
    const hexagonsInLayer = sides * (hexagonLayers - 1);

    for (let i = 0; i < hexagonsInLayer; i++) {
      const angleDeg = (360 / hexagonsInLayer) * i;
      const angleRad = Math.PI / 180 * angleDeg;
      const x = distance * Math.cos(angleRad);
      const y = distance * Math.sin(angleRad);
      const hexagon = createHexagon(x, y, size);
      container.appendChild(hexagon);
    }
  }
  hexagonLayers++;
}

function createHexagon(x, y, size) {
  const hexagonSvg = document.createElementNS("http://www.w3.org/2000/svg", "svg");
  const hexSize = size * 2;
  hexagonSvg.setAttribute("width", hexSize);
  hexagonSvg.setAttribute("height", hexSize * Math.sqrt(3)/2);
  hexagonSvg.style.position = "absolute";
  hexagonSvg.style.left = `50%`;
  hexagonSvg.style.top = `50%`;
  hexagonSvg.style.marginLeft = `${x - size}px`;
  hexagonSvg.style.marginTop = `${y - size * Math.sqrt(3)/2}px`;

  const hexagon = document.createElementNS("http://www.w3.org/2000/svg", "polygon");
  hexagon.setAttribute("class", "hexagon");
  const points = [];
  for (let i = 0; i < 6; i++) {
    const angleDeg = 60 * i;
    const angleRad = Math.PI / 180 * angleDeg;
    points.push((size + size * Math.cos(angleRad)) + "," + (size * Math.sqrt(3)/2 + size * Math.sin(angleRad)));
  }
  hexagon.setAttribute("points", points.join(" "));
  hexagonSvg.appendChild(hexagon);

  return hexagonSvg;
}
