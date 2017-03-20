#pragma once
#include "GameObject.h"
class Player :
	public GameObject
{
private:


 public:
    void Getdirection(char);
	//void Keyboard(unsigned char, int, int);
	int direction;
	void Move(float gameTime);
	Player(float initX, float initY, float initZ);
	~Player();
};

