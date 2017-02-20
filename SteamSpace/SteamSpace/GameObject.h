#pragma once
#include <GL/glut.h>
class GameObject
{
private:
	GLuint texture; //Texture holder
	float x;
	float y;
	float z;

public:
	GameObject(float initX, float initY, float initZ);
	~GameObject();
	void MoveR(float gameTime);
	void MoveL(float gameTime);
	void Render();
};

