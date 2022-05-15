#include "GlInitializer.h"
#include <GL/freeglut_std.h>
#include <GL/glew.h>

void GlInitializer::initializeWindow() {
	glutInitWindowSize(windowWidth, windowHeight);
	glutInitWindowPosition(windowX, windowY);
	glutCreateWindow(windowTitle.c_str());
}
GlInitializer::GlInitializer(int winW, int winH, int winX, int winY, string winTitle) {
	windowWidth = winW;
	windowHeight = winH;
	windowX = winX;
	windowY = winY;
	windowTitle = winTitle;
}
bool GlInitializer::initialize(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	initializeWindow();

	GLenum glewRes = glewInit();
	if (glewRes != GLEW_OK) {
		fprintf(stderr, "Error: '%s'\n", glewGetErrorString(glewRes));
		return false;
	}
	return true;
}
void GlInitializer::initializeDisplayFunc() {
	glutDisplayFunc([]() -> void {
		glClear(GL_COLOR_BUFFER_BIT);
		glutSwapBuffers();
	});
}