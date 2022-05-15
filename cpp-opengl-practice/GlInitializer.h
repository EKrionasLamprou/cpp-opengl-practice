#pragma once
#ifndef GL_INITIALIZER_H
#define GL_INITIALIZER_H

#include <string>

using std::string;

/// <summary>
/// Contains methods for initializing OpenGL.
/// </summary>
class GlInitializer {
private:
	int windowWidth, windowHeight, windowX, windowY;
	string windowTitle;

	void initializeWindow();
	void initializeDisplayFunc();

public:
	/// <summary>
	/// Initializes a new instance of the <see cref="GlInitializer"/> class.
	/// </summary>
	/// <param name="winW">The width of the window.</param>
	/// <param name="winH">The height of the window.</param>
	/// <param name="winX">The x position of the window.</param>
	/// <param name="winY">The y position of the window.</param>
	/// <param name="winTitle">The window title.</param>
	GlInitializer(int winW, int winH, int winX, int winY, string winTitle);
	/// <summary>
	/// Initializes OpenGL using the given arguments. 
	/// </summary>
	/// <param name="argc">
	/// A pointer to the program's unmodified argc variable from main.
	/// Upon return, the value pointed to by argcp will be updated,
	/// because glutInit extracts any command line options intended for
	/// the GLUT library. </param>
	/// <param name="argv">
	/// The program's unmodified argv variable from main. Like argcp,
	/// the data for argv will be updated because glutInit extracts any
	/// command line options understood by the GLUT library. 
	/// </param>
	void initialize(int argc, char* argv[]);
};

#endif