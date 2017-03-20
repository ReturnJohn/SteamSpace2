#include "GameWorld.h"
#include <GL/glut.h>
#include <stdlib.h>
Player * go;



void GameWorld::Update() 
{
	
	int timeSinceStart = glutGet(GLUT_ELAPSED_TIME);
	float deltaTime = timeSinceStart - oldTimeSinceStart;
	oldTimeSinceStart = timeSinceStart;

	for each (GameObject *go in sceneObjects)
	{
       go->Move(deltaTime / 1000);
	}

	
}

void GameWorld::Render() 
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
	glLoadIdentity(); 
	glTranslatef(0.0f, 0.0f, -12.0f);

	for each (GameObject* go in sceneObjects)
	{
		go->Render();
	}
	
	
	glutSwapBuffers();
	glutPostRedisplay();

}
GameWorld::GameWorld()
{
	
	oldTimeSinceStart = 0;
	
	glEnable(GL_TEXTURE_2D); 
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);  
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	go = new Player(0, 0, 0);
	AddObject(go);
	
}

void GameWorld::AddObject(GameObject *ged)
{
	
	sceneObjects.push_back(ged);

}

GameWorld::~GameWorld()
{
	delete go;
}
