#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    ofSetVerticalSync(true);
    ofSetFrameRate(30);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255);
    ofDrawBitmapString(ofToString(ofGetFrameRate()), 20, 20);
   
//  ofDrawRectangle(100, 100, 100, 100);
//    ofSetLineWidth(10);
//    ofDrawLine(0, 0, ofGetWidth(), ofGetHeight());
//    
//
//    float alpha = ofMap(ofGetMouseX(), 0,  ofGetWidth(), 255, 0);
//    ofSetColor(255, alpha);
//    ofSetRectMode(OF_RECTMODE_CENTER);
//    ofDrawRectangle(ofGetMouseX(), ofGetMouseY(), 100, 100);
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
