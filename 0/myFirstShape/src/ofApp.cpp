#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    y = 0;
    inc = 1;
}

//--------------------------------------------------------------
void ofApp::update(){
    y += inc;
    
    y = y % ofGetHeight();
}

//--------------------------------------------------------------
void ofApp::draw(){
   
    ofSetColor(255,0,255);
    ofBeginShape();
    ofVertex(50, 50);
    ofVertex(150, 50);
    ofVertex(150, 150);
    ofEndShape();
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case 'a':
            inc += 1;
            break;
        case 'z':
            inc -= 1;
            break;
            
    }

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
