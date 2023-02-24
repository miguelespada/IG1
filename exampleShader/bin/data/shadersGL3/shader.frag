#version 150

in  vec4 color;


out vec4 outputColor;
in float v;
vec4 new_color;

void main()
{
	new_color = color;
    

	outputColor = new_color;
}