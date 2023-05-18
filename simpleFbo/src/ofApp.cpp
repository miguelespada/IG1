#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    plane.set(2000, 2000);
    plane.rotateDeg(-90, 1, 0, 0);
    plane.move(0, -50.1, 0);
    
    
    
    ofEnableNormalizedTexCoords();
    ofDisableArbTex();
    fbo.allocate(1000, 1000);
    texture = fbo.getTexture();

}

//--------------------------------------------------------------
void ofApp::update(){
    fbo.begin();
    ofBackground(255);
    ofSetColor(255, 0, 0);
    ofSetCircleResolution(100);
    ofDrawCircle(500, 500, ofGetFrameNum() % 500);
    fbo.end();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    texture.bind();
    plane.draw();
    texture.unbind();
    cam.end();
}
