#version 150

uniform mat4 modelViewProjectionMatrix;
uniform float value;

out float v;

in vec4 position;
vec4 new_pos;
out vec4 color;

const vec4 colors[3] = vec4[3](vec4(1, 0, 0, 1),
								vec4(0, 1, 0, 1),
								vec4(0, 0, 1, 1));

void main(){
	v = value;
	
	new_pos = position;
	new_pos = vec4(position[0], position[1] * value, position[2], position[3]);

	gl_Position = modelViewProjectionMatrix * new_pos;


	color = colors[gl_VertexID];
}
