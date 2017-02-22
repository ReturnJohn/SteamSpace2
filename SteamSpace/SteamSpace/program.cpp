#include "GameWorld.h"
#include <GL/glut.h>
#include <SOIL.h>
GameWorld * world;


void InitOpenGL()
{
	glShadeModel(GL_SMOOTH); //Enable smooth shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.5f); //Set clear color
	glClearDepth(1.0f); // Set clearing depth for depth buffer
	glEnable(GL_DEPTH_TEST); //Enable depth testing
	glDepthFunc(GL_LEQUAL); //Set depth buffer testing to less then or equal

	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST); //Specifies how colors/textures are interpolized on surfaces
}

void Reshape(int width, int height)
{
	if (height == 0) { height = 1; } //Make sure no divide by zero can happen 
	glViewport(0, 0, width, height);//Reset the current viewport

	glMatrixMode(GL_PROJECTION); //Specify projection matrix stack
	glLoadIdentity(); //Reset projection matrix stack - top matrix

	gluPerspective(45.0f, width / height, 0.0f, 100.0f); //Set perspective to match current display size

	glMatrixMode(GL_MODELVIEW); //Specify model view matrix
	glLoadIdentity(); //reset model view matrix - top matrix

}

void Keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 1: //ESC
		exit(0);
		break;
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
	glutInit(&argc, argv);//Init GLUT
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH); //Initialize glut display mode with rgb and alpha colors and Depth
	glutInitWindowSize(500, 500); //Set window size
	glutInitWindowPosition(0, 0); //Set window position

	glutCreateWindow("My game"); //Create GLUT OpenGL Window

	InitOpenGL();
	glutReshapeFunc(&Reshape);
	glutDisplayFunc(&GameLoop);
	glutKeyboardFunc(&Keyboard);

	world = new GameWorld();
	glutMainLoop();

}