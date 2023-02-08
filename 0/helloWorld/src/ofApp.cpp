#include "ofApp.h"

using namespace glm;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofBackground(ofColor::white);
    ofSetBackgroundAuto(true);
    
    ofRectangle r;
}

//--------------------------------------------------------------
void ofApp::update(){

    if(ofGetMousePressed()){
        myRects.push_back(vec2(mouseX, mouseY));
    }
//    
//    myRects.push_back(glm::vec2(ofGetWidth()/2, abs(sin(ofDegToRad(ofGetFrameNum() % 360))) * ofGetHeight()) );
//    
    if(myRects.size()> 100)
        myRects.pop_front();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    float t = 10;
    for(auto r: myRects){
        ofDrawCircle(r.x, r.y, t);
        t += 2;
        ofSetColor(255, 0, 0, 80);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case 'c':
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
