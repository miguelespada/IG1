#include "ofApp.h"
#include "Enemy.hpp"

//--------------------------------------------------------------
void ofApp::setup(){
    for(int i = 0; i < 10; i ++){
        int x = ofRandom(ofGetWidth());
        int y = 0;
        gameObjects.push_back(new Enemy(x, y));
    }
    for(int i = 0; i < 10; i ++){
        int x = ofRandom(ofGetWidth());
        int y = 0;
        gameObjects.push_back(new GameObject(x, y));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(auto go: gameObjects)
        go->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(auto go: gameObjects)
        go->draw();
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
