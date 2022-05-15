#include <iostream>
#include "GlInitializer.h"
#include <GL/freeglut_std.h>

const int winWidth = 1000, winHeight = 768, winX = 100, winY = 100;
const string winTitle = "OpenGL Practice";

int main(int argc, char* argv[]) {
	GlInitializer glInit(winWidth, winHeight, winX, winY, "test");
	glInit.initialize(argc, argv);

	glutMainLoop();
	return 0;
}