#version 150

uniform mat4 modelViewProjectionMatrix;

in vec4 position;

uniform float value;
out float val;
vec4 pos;

void main(){
	val = value;
    pos = position + vec4(0.0, 0.0, 0.0, 0.0);
	gl_Position = modelViewProjectionMatrix * pos;
}
