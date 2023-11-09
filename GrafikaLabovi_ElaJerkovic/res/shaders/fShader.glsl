#version 330 core

in vec3 normals;
in vec2 TexCord;
in vec4 Color;

out vec4 fColor;

uniform sampler2D tex;


void main()
{
	fColor=texture(tex, TexCord);
	//fColor = color;
}