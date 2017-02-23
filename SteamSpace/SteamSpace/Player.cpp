#include "Player.h"
#include "GameObject.h"
#include "SOIL.h"



Player::Player(float initX, float initY, float initZ) : GameObject(initX,initY,initZ)
{
	x = initX;
	y = initY;
	z = initZ;
	direction = 0;
	texture = SOIL_load_OGL_texture("Plane.png", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y); //Load texture through soil
	glBindTexture(GL_TEXTURE_2D, texture); 
}


void Player::Move(float gameTime) 
{
	switch (direction)
	{
	case 1:
		x -= 1.5f * gameTime;
		break;
	case 2:
		x += 1.5f * gameTime;
		break;
	case 3:
		y += 1.5f * gameTime;
		break;
	case 4:
		y -= 1.5f * gameTime;
		break;
	default:
		break;
	}
}


Player::~Player()
{
}
