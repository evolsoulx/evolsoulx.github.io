//
// Simple passthrough fragment shader
//
varying vec2 v_vTexcoord;
varying vec4 v_vColour;
uniform vec2 shiftR, shiftG, shiftB;
void main()
{
    vec4 R,G,B;
    R = v_vColour * texture2D(gm_BaseTexture,v_vTexcoord+shiftR/1000.0);
    R = vec4(R.r,0.0,0.0,0.33);
    G = v_vColour * texture2D(gm_BaseTexture,v_vTexcoord+shiftG/1000.0);
    G = vec4(0.0,G.g,0.0,0.33);
    B = v_vColour * texture2D(gm_BaseTexture,v_vTexcoord+shiftB/1000.0);
    B = vec4(0.0,0.0,B.b,0.33);
    gl_FragColor = R+G+B;
}