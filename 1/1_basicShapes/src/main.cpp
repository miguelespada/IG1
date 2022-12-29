#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    ofGLFWWindowSettings settings;
        settings.setSize(800, 800);
        ofCreateWindow(settings);

        ofRunApp(new ofApp());
    



}
