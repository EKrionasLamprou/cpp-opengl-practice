#include "GlInitializer.h"
#include <iostream>
#include <string>
#include <GL\glew.h>
#include <GL\freeglut.h>

using std::string;

void GlInitializer::initializeWindow() {
	glutInitWindowSize(windowWidth, windowHeight);
	glutInitWindowPosition(windowX, windowY);
	glutCreateWindow(windowTitle.c_str());
}
void GlInitializer::initializeDisplayFunc() {
	glutDisplayFunc([]() -> void {
		glClear(GL_COLOR_BUFFER_BIT);
		glutSwapBuffers();
		});
}
GlInitializer::GlInitializer(int winW, int winH, int winX, int winY, string winTitle) {
	windowWidth = winW;
	windowHeight = winH;
	windowX = winX;
	windowY = winY;
	windowTitle = winTitle;
}
void GlInitializer::initialize(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	initializeWindow();
	initializeDisplayFunc();
}