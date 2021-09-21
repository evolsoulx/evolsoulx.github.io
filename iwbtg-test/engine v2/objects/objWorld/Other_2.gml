/// @description Load what we need
pause = 0;
AudioLoad();
InitializeGlobal();
if(instance_exists(objTest))
	global.title += " Test Mode";
gml_release_mode(global.fastMode);