#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	// using programmable pipeline
	ofGLFWWindowSettings settings;
	settings.setGLVersion(3,2);
	settings.setSize(1280, 800);
	settings.windowMode = OF_WINDOW;
	ofCreateWindow(settings);

	// or default setup 
	// ofSetupOpenGL(1280,800, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new ofApp());

}
