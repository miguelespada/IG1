#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    model.loadModel("shuttle.fbx");
    light.setPosition(0, 500, 500);
    transform.rotateDeg(-90, 1, 0, 0);
    collider.setParent(transform);
    
    model.setScale(0.005, 0.005, 0.005);
    model.setRotation(0, 90, 1, 0, 0);
    collider.set(200, 200, 50);
    
    collider.setPosition(0, -30, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
   // transform.move(1, 0, 0);
   // transform.rotateDeg(0.1, 1, 0, 0);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofEnableDepthTest();
    
    light.enable();
    
    cam.begin();
    
    
    transform.transformGL();
    ofDrawAxis(100);
    model.drawFaces();
    transform.restoreTransformGL();
 
    
    collider.drawWireframe();
    
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
