#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofSetBackgroundColor(0);
    ofSetFrameRate(30);
    
    for(int i = 0; i < 100; i ++){
        float x = ofRandom(ofGetWidth());
        float y = ofRandom(ofGetWidth());
        float size = ofRandom(10, 200);
        objects.push_back(new MyObject(glm::vec3(x, y, 0), size));
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(auto o: objects)
        o->update();
}
//--------------------------------------------------------------
void ofApp::draw(){
    for(auto o: objects)
        o->draw();
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
