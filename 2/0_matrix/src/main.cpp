#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    ofGLFWWindowSettings settings;
        settings.setGLVersion(3, 2);
    
        settings.setPosition(glm::vec2(0, 0));
        settings.multiMonitorFullScreen = true;
        settings.doubleBuffering = false;
        settings.setSize(800, 800);
        ofCreateWindow(settings);

        ofRunApp(new ofApp());
    



}
