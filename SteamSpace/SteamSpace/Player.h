#pragma once
#include "GameObject.h"
class Player :
	public GameObject
{
	

 public:
	 float X;
	 float Y;
	 float Z;
	
	void MoveR();
	void MoveL();
    void Keyboard(unsigned char key, int x, int y);
	void Update(float gameTime);
	Player(float initX, float initY, float initZ);
	~Player();
};

