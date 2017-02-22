#pragma once
#include "GameObject.h"
class Player :
	public GameObject
{
	

 public:
	int i;
	float x;
    float y;
	float z;
	void MoveR();
	void MoveL();
    static void Keyboard(unsigned char key, int x, int y);
	void Update(float gameTime);
	Player(float initX, float initY, float initZ);
	~Player();
};

