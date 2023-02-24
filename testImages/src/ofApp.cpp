#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    img.load("mario.png");
    
    gui.setup();
    gui.add(scale.set("scale", glm::vec2(1), glm::vec2(-2), glm::vec2(2)));
    gui.add(pos.set("pos", glm::vec2(0), glm::vec2(-2000), glm::vec2(2000)));
    gui.add(rot.set("rot", 0, 0, 360));
    gui.add(tam.set("tam", 16, 10, 100));
    
    pos = glm::vec2(0, 8);
    pos1 = glm::vec2(20, 8);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------    
void ofApp::draw(){
    
    ofPushMatrix();
    ofTranslate(300, 300);
    ofScale(20, 20);
    
   // ofTranslate(tam, 0);
  //  ofScale(-1, 1);
    if(ofGetKeyPressed('1'))
        img.drawSubsection(0, 0, tam, tam, 0, 8);
    
    if(ofGetKeyPressed('2'))
        img.drawSubsection(0, 0, tam, tam, 20, 8);
    
    
    if(ofGetKeyPressed('3'))
        img.drawSubsection(0, 0, tam, tam , 38, 8);
    
    ofPopMatrix();
    
    
////    ofPushMatrix();
////    ofTranslate(pos);
////    ofScale(scale.get().x, scale.get().y);
////    ofRotateDeg(rot, 0, 0, 1);
////    ofTranslate(-50, -50);
//    img.drawSubsection(0,0, 200, 200, pos.get().x, pos.get().y);
//
//
//
//   // ofPopMatrix();
    
    gui.draw();
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
