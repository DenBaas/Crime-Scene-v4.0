#pragma once
#include <GL\glew.h>
#include <CaveLib\Shader.h>

using namespace std;

class FrameBufferObject
{
public:
	FrameBufferObject();
	~FrameBufferObject();

	GLuint fboID;
	GLuint rboID;
	GLuint fboTextureID;
	GLuint rboTextureID;
	std::vector<ShaderProgram*> fboShaders;
	int currentShader = 0;

	void bind();
	void unbind();
	void init(int width, int height);
	void use();
};

