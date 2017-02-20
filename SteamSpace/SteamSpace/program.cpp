#include <SOIL.h>
#include<GL/glut.h>
void InitOpenGL()
{
	glShadeModel(GL_SMOOTH); //Enable smooth shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.5f); //Set clear color
	glClearDepth(1.0f); // Set clearing depth for depth buffer
	glEnable(GL_DEPTH_TEST); //Enable depth testing
	glDepthFunc(GL_LEQUAL); //Set depth buffer testing to less then or equal

	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST); //Specifies how colors/textures are interpolized on surfaces
}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);//Init GLUT
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH); //Initialize glut display mode with rgb and alpha colors and Depth
	glutInitWindowSize(500, 500); //Set window size
	glutInitWindowPosition(0, 0); //Set window position

	glutCreateWindow("My game"); //Create GLUT OpenGL Window

	InitOpenGL();
	//glutReshapeFunc(&Reshape); //Takes a function pointer to the reshape function
	//glutDisplayFunc(&GameLoop); //Takes a function pointer to the main loop / display function
	//glutKeyboardFunc(&Keyboard); //Takes a function pointer to the keyboard input handling function
	glutMainLoop(); //Start the glut main loop, only return when finish running the gameloop


}