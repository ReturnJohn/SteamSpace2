#pragma once
#include "GameObject.h"
class Player :
	public GameObject
{
private:


 public:
	int direction;
	void Move(float gameTime);
	Player(float initX, float initY, float initZ);
	~Player();
};

