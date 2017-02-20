#pragma once
#include "GameObject.h"
class GameWorld
{
	
private: 
	GameObject * go;
	int oldTimeSinceStart;
public:
	GameWorld();
	void Update();
	void Render();
	~GameWorld();
};

