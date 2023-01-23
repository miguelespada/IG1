#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(true);
    ofSetBackgroundColor(0);
    ofSetFrameRate(30);
    shader.load("shadersGL3/shader");
    
}

//--------------------------------------------------------------
void ofApp::update(){
    

    
    
}
//--------------------------------------------------------------
void ofApp::draw(){
    
    shader.begin();
    shader.setUniform1f("value", value.get());
    ofBeginShape();
    ofVertex(400, 0);
    ofVertex(0, 400);
    ofVertex(800, 400);
    ofEndShape();
    
    shader.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
