#include "GameObject.h"
#include<SOIL.h>



GameObject::GameObject(float initX, float initY, float initZ)
{
	x = initX;
	y = initY;
	z = initZ;
	texture = SOIL_load_OGL_texture("PokeBall.png", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y); //Load texture through soil
	glBindTexture(GL_TEXTURE_2D, texture); //bind texture
}


GameObject::~GameObject()
{
}
void GameObject::Render()
{
	glPushMatrix(); //Makes sure only this objects uses the current matrix
	glTranslatef(x, y, 0);

	glBindTexture(GL_TEXTURE_2D, texture); //Bind texture for usage
	glBegin(GL_QUADS);
	// Front Face
	glTexCoord2f(0.0f, 0.0f); glVertex3f(-1.0f, -1.0f, 1.0f);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(1.0f, -1.0f, 1.0f);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(1.0f, 1.0f, 1.0f);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(-1.0f, 1.0f, 1.0f);
	glEnd();

	glPopMatrix(); //Makes sure only this objects uses the current matrix any manipulation of the matrix is lost
}

void GameObject::MoveR(float gameTime)
{
	x += 0.5f*gameTime;
}
void GameObject::MoveL(float gameTime)
{
	x -= 0.5f*gameTime;
}