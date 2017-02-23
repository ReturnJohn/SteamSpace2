#include "GameWorld.h"
#include <GL/glut.h>
#include <stdlib.h>
Player * go;



void GameWorld::Update() 
{
	
	int timeSinceStart = glutGet(GLUT_ELAPSED_TIME);
	float deltaTime = timeSinceStart - oldTimeSinceStart;
	oldTimeSinceStart = timeSinceStart;

	
	
	go->Update(deltaTime / 1000);


	for each (GameObject go in sceneObjects)
	{
       go.Move(deltaTime / 1000);
	}

	go->Move(deltaTime / 1000);
>>>>>>> 0da0f367d22534af9ea76c9ded77460315a9e66b
}

void GameWorld::Render() 
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
	glLoadIdentity(); 
	glTranslatef(0.0f, 0.0f, -12.0f);

	for each (GameObject go in sceneObjects)
	{
		go.Render();
	}
	
	go->Render();
	glutSwapBuffers();
	glutPostRedisplay();

}
GameWorld::GameWorld(Player *player)
{
	
	oldTimeSinceStart = 0;

	glEnable(GL_TEXTURE_2D); 
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);  
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	
	go =  player;
}

GameWorld::~GameWorld()
{
	delete go;
}
