#version 150

uniform mat4 modelViewProjectionMatrix;

in vec4 position;

uniform float value;
out vec4 color;
vec4 pos;

const vec4 colors[3] = vec4[3](vec4(1, 0, 0, 1),
								vec4(0, 1, 0, 1),
								vec4(0, 0, 1, 1));

void main(){
	gl_Position = modelViewProjectionMatrix * position;
	color = colors[gl_VertexID];
}
