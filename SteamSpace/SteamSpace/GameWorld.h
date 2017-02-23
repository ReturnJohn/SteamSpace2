#pragma once
#include "GameObject.h"
#include "Player.h"
#include <vector>;
using namespace std;
class GameWorld
{
	
private: 
	Player *go;
	int oldTimeSinceStart;
	unsigned char input;
	vector<GameObject> sceneObjects;
	vector<GameObject>::iterator it;

	

public:
	float x;
	float y;
	float z;
	void testPlayer();
	void testPlayer2();
	GameWorld(Player *player);
	void AddObject(GameObject go);
	void DeleteGameObject(GameObject *go);
	void Update();
	void Render();
	~GameWorld();
};

