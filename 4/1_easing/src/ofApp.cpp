#include "ofApp.h"

#include "ofxEasing.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(true);
    ofSetBackgroundColor(0);
    ofSetFrameRate(30);
    gui.setup();
    gui.add(v.set("v", 0, 0, ofGetWidth()));
    
    prevY = 0;
    v = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    float y = ofxeasing::map(v, 0, ofGetWidth(), ofGetHeight(), 0, &ofxeasing::quint::easeInOut);
    
    
    polyline.lineTo(v, y);
    
}
//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    
    
    polyline.draw();
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
