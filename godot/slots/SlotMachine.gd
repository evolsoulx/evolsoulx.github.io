extends Node2D



var handleUp
var handleDown
var spinButton
var spinState
var reelSpeed
var reel1Cur
var reel2Cur
var reel3Cur
var spritesPerReel
var reel1
var reel2 
var reel3
var reelSD
func _ready():
	handleUp = $handleUp
	handleDown = $handleDown
	spinButton = $"../CanvasLayer/SpinButton"
	handleDown.visible = false
	handleUp.visible = true
	spinState = 0;
	#0 idle, 1 running, 2 stopping
	reel1 = $reels/reel1
	reel2 = $reels/reel2
	reel3 = $reels/reel3
	

	#need to make this dynamic. DONT GET TOO FAR WITHOUT FIXING THIS.
	
	reelSpeed = 1
	reel1Cur = 0
	reel2Cur = 0
	reel3Cur = 0
	spritesPerReel = 4
	
	reelSD = 64
func spin():
	spinState = 1
	reel1.position.y += reelSpeed*reelSD
	reel2.position.y += reelSpeed*reelSD
	reel3.position.y += reelSpeed*reelSD
	
	if reel1.position.y >= reelSD*8:
		reel1.position.y = -reel1.texture.get_height() + reelSD*8
	if reel2.position.y >= reelSD*8:
		reel2.position.y = -reel1.texture.get_height() + reelSD*8
	if reel3.position.y >= reelSD*8:
		reel3.position.y = -reel1.texture.get_height() + reelSD*8		
func _input(event):
	if event is InputEventMouseButton:
		if spinButton.get_global_rect().has_point(event.position):
			if spinState == 1:
				spin()
			if event.pressed:
				# Button is pressed
				handleDown.visible = true
				handleUp.visible = false
				spinState = 1
			else:
				# Button is released
				handleDown.visible = false
				handleUp.visible = true
				spinState = 2
