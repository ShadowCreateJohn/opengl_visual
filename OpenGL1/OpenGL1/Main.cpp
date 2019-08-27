#include <glut.h>
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )
void dis(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("the first openGL");
	glutDisplayFunc(&dis);
	glutMainLoop();
	return 0;
}