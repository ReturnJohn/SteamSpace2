#pragma once
#include "GameObject.h"
#include "Player.h"
class GameWorld
{
	
private: 
	GameObject *go;
	int oldTimeSinceStart;
	unsigned char input;

public:
	float x;
	float y;
	float z;
	
	GameWorld(Player player);
	void Update();
	void Render();
	~GameWorld();
};

