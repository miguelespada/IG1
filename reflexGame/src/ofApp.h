#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

   
    enum States {
        waiting, shapes, result
    };
    
public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
    
    void nextState();
    
    States state, prevState;
    float t0;
    
    float waitingTime;
    float reactionTime;
    
    ofTrueTypeFont    myFont;
};
