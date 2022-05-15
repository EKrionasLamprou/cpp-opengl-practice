#include "GlInitializer.h"
#include <GL/freeglut_std.h>
#include <GL/glew.h>

const int winWidth = 1000, winHeight = 768, winX = 100, winY = 100;
const string winTitle = "OpenGL Practice";

int main(int argc, char* argv[]) {
	GlInitializer glInit(winWidth, winHeight, winX, winY, winTitle);
	bool initSuccess = glInit.initialize(argc, argv);
	if (!initSuccess) {
		return 1;
	}

	glInit.initializeDisplayFunc();

	glutMainLoop();
	return 0;
}