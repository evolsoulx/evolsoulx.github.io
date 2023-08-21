const canvas = document.getElementById('spriteCanvas');
const ctx = canvas.getContext('2d');
const n = 32;

let img = new Image();
let draggedItem = null;
let dragOverItem = null;

initializeSlider();
initializeFileInput();
initializeSaveButton();

function initializeSlider() {
    const slider = document.getElementById('scaleSlider');
    const scaleValueSpan = document.getElementById('scaleValue');

    slider.addEventListener('input', function () {
        const scale = parseFloat(slider.value);
        scaleValueSpan.textContent = `${scale}x`;

        const draggableItems = document.querySelectorAll('.draggable');
        draggableItems.forEach(item => {
            item.style.transform = `scale(${scale})`;
        });
    });
}

function initializeFileInput() {
    document.getElementById('fileInput').addEventListener('change', function (event) {
        const reader = new FileReader();

        reader.onload = function (event) {
            img.onload = function () {
                processImage();
                setupDragDrop();
                animateSprites();
            }
            img.src = event.target.result;
        }
        reader.readAsDataURL(event.target.files[0]);
    });
}

function processImage() {
    canvas.width = img.width;
    canvas.height = img.height;
    ctx.drawImage(img, 0, 0);
    
    const rows = Math.floor(img.height / n);
    for (let i = 0; i < rows; i++) {
        const frameCanvas = createDraggableCanvas(i);
        document.getElementById('spriteList').appendChild(frameCanvas);
    }
}

function createDraggableCanvas(row) {
    const frameCanvas = document.createElement('canvas');
    frameCanvas.className = 'draggable';
    frameCanvas.draggable = true;
    frameCanvas.dataset.row = row;
    frameCanvas.width = img.width;
    frameCanvas.height = n;
    frameCanvas.getContext('2d').drawImage(img, 0, row * n, img.width, n, 0, 0, img.width, n);
    return frameCanvas;
}

function setupDragDrop() {

    document.addEventListener('dragstart', (e) => {
        draggedItem = e.target;
        setTimeout(() => { draggedItem.style.opacity = 0.5; }, 0);
    });

    document.addEventListener('dragend', () => {
        setTimeout(() => {
            draggedItem.style.opacity = '';
            draggedItem = null;
            dragOverItem = null;
            resetDraggableBorders();
        }, 0);
    });

    const spriteList = document.getElementById('spriteList');
    spriteList.addEventListener('dragover', (e) => e.preventDefault());
    spriteList.addEventListener('dragenter', handleDragEnter);
    spriteList.addEventListener('dragleave', handleDragLeave);
    spriteList.addEventListener('drop', handleDrop);
}

function resetDraggableBorders() {
    document.querySelectorAll('.draggable').forEach(item => {
        item.style.border = '1px solid #ccc';
    });
}

function handleDragEnter(e) {
    if (e.target.className === 'draggable') {
        dragOverItem = e.target;
        if (draggedItem !== dragOverItem) {
            e.target.style.borderTop = '2px solid red';
        }
    }
}

function handleDragLeave(e) {
    if (e.target.className === 'draggable' && draggedItem !== e.target) {
        e.target.style.borderTop = '1px solid #ccc';
    }
}

function handleDrop(e) {
    e.preventDefault();
    if (dragOverItem) {
        if (e.clientY < dragOverItem.getBoundingClientRect().top + dragOverItem.getBoundingClientRect().height / 2) {
            dragOverItem.parentNode.insertBefore(draggedItem, dragOverItem);
        } else {
            const nextItem = dragOverItem.nextSibling;
            if (nextItem) {
                dragOverItem.parentNode.insertBefore(draggedItem, nextItem);
            } else {
                dragOverItem.parentNode.appendChild(draggedItem);
            }
        }
        dragOverItem.style.borderTop = '1px solid #ccc';
    }
}

function initializeSaveButton() {
    document.getElementById('saveButton').addEventListener('click', saveCanvasAsPNG);
}

function saveCanvasAsPNG() {
    const orderedDraggables = document.querySelectorAll('.draggable');

    ctx.clearRect(0, 0, canvas.width, canvas.height);
    orderedDraggables.forEach((item, i) => {
        const originalRowIndex = parseInt(item.dataset.row, 10);
        ctx.drawImage(img, 0, originalRowIndex * n, img.width, n, 0, i * n, img.width, n);
    });

    const dataURL = canvas.toDataURL("image/png");
    const link = document.createElement('a');
    link.download = 'rearranged_sprite_sheet.png';
    link.href = dataURL;
    link.click();
}

function animateSprites() {
    const rows = Math.floor(img.height / n);
    const animationsContainer = document.getElementById('animations');

    for (let i = 0; i < rows; i++) {
        const animCanvas = document.createElement('canvas');
        animCanvas.width = n;
        animCanvas.height = n;
        animationsContainer.appendChild(animCanvas);

        const totalFrames = countFrames(ctx, i);
        animateCanvas(animCanvas, i, totalFrames);
    }
}

function animateCanvas(animCanvas, row, totalFrames) {
    let frame = 0;
    function drawFrame() {
        const animCtx = animCanvas.getContext('2d');
        animCtx.clearRect(0, 0, n, n);
        animCtx.drawImage(img, frame * n, row * n, n, n, 0, 0, n, n);

        frame = (frame + 1) % totalFrames;
        setTimeout(() => {
            requestAnimationFrame(drawFrame);
        }, 100);
    }
    drawFrame();
}

function countFrames(ctx, row) {
    let frameCount = 0;
    for (let i = 0; i < img.width / n; i++) {
        const imageData = ctx.getImageData(i * n, row * n, n, n).data;
        if (Array.from(imageData).some(value => value !== 0)) {
            frameCount++;
        }
    }
    return frameCount;
}
