#include "GameWorld.h"
#include <GL/glut.h>
#include <SOIL.h>
GameWorld * world;
Player * player;

void InitOpenGL()
{
	glShadeModel(GL_SMOOTH);
	glClearColor(0.0f, 0.0f, 0.0f, 0.5f); 
	glClearDepth(1.0f); 
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL); 

	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST); 
}

void Reshape(int width, int height)
{
	if (height == 0) { height = 1; } 
	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity(); 

	gluPerspective(45.0f, width / height, 0.0f, 100.0f); 

	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity(); 

}

void Keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: 
		exit(0);
		break;
	case'a': 
		player->direction = 1; break;
	case'd':
		player->direction = 2; break;
	case'w':
		player->direction = 3; break;
	case's':
		player->direction = 4; break;

	
	default:
		break;
	}

}

void GameLoop()
{
	world->Update();
	world->Render();
}


void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH); 
	glutInitWindowSize(500, 500); 
	glutInitWindowPosition(0, 0); 

	glutCreateWindow("My game"); 

	InitOpenGL();
	glutReshapeFunc(&Reshape);
	glutDisplayFunc(&GameLoop);
	glutKeyboardFunc(&Keyboard);

    player = new Player(0,-3,0);

	world = new GameWorld(player);
	
	
	glutMainLoop();

}