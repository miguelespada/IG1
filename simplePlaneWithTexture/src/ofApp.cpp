#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    plane.set(2000, 2000);
    plane.rotateDeg(-90, 1, 0, 0);
    plane.move(0, -50.1, 0);
    
    ofEnableNormalizedTexCoords();
    ofDisableArbTex();
    ofImage img;
    img.load("cat.png");

    texture = img.getTexture();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    texture.bind();
    plane.draw();
    texture.unbind();
    cam.end();
}
