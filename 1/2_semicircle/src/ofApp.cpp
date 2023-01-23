#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(255);
    ofSetVerticalSync(true);
    ofSetFrameRate(30);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0, 125);
    drawCircle(400, 400, 200, 90, 270);
    
    ofSetColor(255, 255, 0, 125);
    drawCircle(390, 400, 200, 270, 360+90);
    
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


void  ofApp::drawCircle(int x, int y, int r, int angleInit, int angleEnd){

    ofBeginShape();
    for(float angle = angleInit; angle <= angleEnd; angle ++){
        float px = x + r * cos(ofDegToRad(angle));
        float py = y + r * sin(ofDegToRad(angle));
        ofVertex(px, py);
    }
    ofEndShape();
}
