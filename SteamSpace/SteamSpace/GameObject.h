#pragma once
#include <GL/glut.h>
#include <string.h>
class GameObject
{
private:
	 //Texture holder
	

public:
	GLuint texture;
	float x;
	float y;
	float z;
	GameObject(float initX, float initY, float initZ);
	~GameObject();
	virtual void Move(float gameTime);
	void Render();
};

