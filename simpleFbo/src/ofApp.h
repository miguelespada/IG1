#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    ofPlanePrimitive plane;
    ofTexture texture;
    ofFbo fbo;
    
    ofEasyCam cam;
};
