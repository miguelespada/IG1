#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    prevState = result;
    state = waiting;
    ofSetCircleResolution(100);
    
    myFont.load("Monospace.ttf", 80, true, false);
  
}

//--------------------------------------------------------------
void ofApp::update(){
    // Note this is execute when state is changed
    if(prevState != state){
        prevState = state;
        t0 = ofGetElapsedTimef();
        if(state == waiting)
            waitingTime = ofRandom(1, 2);
        else if (state == result)
            waitingTime = 2;
    }
    
    if(state == waiting || state == result){
        if(ofGetElapsedTimef() - t0 > 1){
            nextState();
        }
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    float stringWidth;
    string s;
    switch(state){
        case waiting:
            ofBackground(ofColor::red);
            break;
        case shapes:
            ofBackground(ofColor::blue);
            ofSetColor(127);
            ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 200);
            break;
        case result:
            ofBackground(ofColor::green);
            
            ofSetColor(255);
            s = ofToString(reactionTime) + " s";
            stringWidth = myFont.stringWidth(s);
            myFont.drawString(s,ofGetWidth()/2 - stringWidth/2, ofGetHeight()/2);
            break;
        default:
            ofBackground(ofColor::black);
            
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case ' ':
            if(state == shapes){
                nextState();
                reactionTime = ofGetElapsedTimef() - t0;
            
            }
            break;
    }
}

void ofApp::nextState(){
    state = States((int(state) + 1) % 3);
    
}
