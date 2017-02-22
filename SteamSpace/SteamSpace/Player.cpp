#include "Player.h"
#include "GameObject.h"
#include <iostream>



Player::Player(float initX, float initY, float initZ) : GameObject(initX,initY,initZ)
{
	x = initX;
	y = initY;
	z = initZ;
	
	
}

void Player::Keyboard(unsigned char key , int x, int y  )
{ 
	
	
	switch (key)
	{
	case'a': break;
//	case'd': Player::X += 0.5f*100; break;
	default:
		break;
	}

}
void Player::Update(float gameTime) 
{
	//X = x;
	glutKeyboardFunc(&Keyboard);
}
void Player::MoveL()
{

}
void Player::MoveR()
{
       
}
Player::~Player()
{
}
