#include "GameWorld.h"
#include <GL/glut.h>
#include <stdlib.h>
GameObject * go;


void GameWorld::Update() 
{
	//Calculate delta time
	int timeSinceStart = glutGet(GLUT_ELAPSED_TIME);
	float deltaTime = timeSinceStart - oldTimeSinceStart;
	oldTimeSinceStart = timeSinceStart;
	
	
	go->Update(deltaTime / 1000);
}

void GameWorld::Render() 
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffer
	glLoadIdentity(); //loads the identity matrix on the matrix stack - essentially resetting any other matrixes
	glTranslatef(0.0f, 0.0f, -12.0f);
	
	go->Render();

	glutSwapBuffers();
	glutPostRedisplay();

}

//void GameWorld::AddObject(GameObject go)
//{
//	sceneObjects.push_back(go);
//}

GameWorld::GameWorld(Player player)
{
	oldTimeSinceStart = 0;

	glEnable(GL_TEXTURE_2D); //Enable texture mapping
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); //Specify how textures should be interpolized over surfaces 
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR); //Specify how textures should be interpolized over surfaces
	
	go = new Player(player);
	
}


GameWorld::~GameWorld()
{
	delete go;
}
