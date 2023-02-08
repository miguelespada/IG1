#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
        ofGLFWWindowSettings settings;
        settings.setGLVersion(4, 1);
    
        settings.setPosition(glm::vec2(0, 0));
        settings.multiMonitorFullScreen = true;
        settings.doubleBuffering = true;
        settings.setSize(800, 800);
        ofCreateWindow(settings);

        ofRunApp(new ofApp());
    
    
	
	ofRunApp(new ofApp());

}
