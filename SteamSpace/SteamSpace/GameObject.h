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
	virtual void Move(float gameTime);
	virtual void Update(float gameTime);
	void Render();
};

