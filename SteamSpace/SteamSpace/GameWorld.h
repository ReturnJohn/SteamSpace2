#pragma once
#include "GameObject.h"
#include "Player.h"
class GameWorld
{
	
private: 
	Player * go;
	int oldTimeSinceStart;
	unsigned char input;
public:
	GameWorld();
	void Update();
	void Render();
	~GameWorld();
};

