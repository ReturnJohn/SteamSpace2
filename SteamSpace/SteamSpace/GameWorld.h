#pragma once
#include "GameObject.h"
#include "Player.h"
#include <vector>;
using namespace std;
class GameWorld
{
	
private: 
	GameObject *go;
	int oldTimeSinceStart;
	unsigned char input;
	vector<GameObject *> sceneObjects;
	vector<GameObject *>::iterator it;
	

public:
	float x;
	float y;
	float z;
	
	GameWorld(Player player);
	void AddObject(GameObject go);
	void Update();
	void Render();
	~GameWorld();
};

