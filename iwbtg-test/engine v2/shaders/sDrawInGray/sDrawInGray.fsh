//
// Simple passthrough fragment shader
//
varying vec2 v_vTexcoord;
varying vec4 v_vColour;
float col;
void main()
{
    gl_FragColor = v_vColour * texture2D( gm_BaseTexture, v_vTexcoord );
	col = gl_FragColor.r*0.2126 + gl_FragColor.g*0.7152 + gl_FragColor.b*0.0722;
	gl_FragColor.rgb = vec3(col,col,col);
}
