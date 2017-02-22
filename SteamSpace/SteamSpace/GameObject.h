#pragma once
#include <GL/glut.h>
#include <string.h>
class GameObject
{
private:
	GLuint texture; //Texture holder
	

public:
	float x;
	float y;
	float z;
	GameObject(float initX, float initY, float initZ);
	~GameObject();
	virtual void Move(float gameTime);
	virtual void Update(float gameTime);
	void Render();
};

