#include "Player.h"
#include "GameObject.h"
#include <iostream>
#include "SOIL.h"



Player::Player(float initX, float initY, float initZ) : GameObject(initX,initY,initZ)
{
	x = initX;
	y = initY;
	z = initZ;
	
	
	
}

void Player::Update(float gameTime) 
{
	
}
void Player::MoveL()
{
	x -= 0.5f * 10;
}
void Player::MoveR()
{
	x += 0.5f * 10 ;
       
}
Player::~Player()
{
}
