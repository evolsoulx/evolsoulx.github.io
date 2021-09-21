//
// Simple passthrough fragment shader
//
varying vec2 v_vTexcoord;
varying vec4 v_vColour;
uniform sampler2D tex;
uniform vec2 pos,uvBak,uvUp;


void main()
{
	vec3 colBack = texture2D(tex, (pos+v_vTexcoord*uvUp) / uvBak).rgb;
    gl_FragColor = v_vColour * texture2D( gm_BaseTexture, v_vTexcoord );
	gl_FragColor.rgb = vec3(1.0,1.0,1.0) - colBack;
}
