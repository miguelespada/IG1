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
    
//    ofMesh quad;
//
//    quad.addVertex(ofVec3f(0, 0, 1));
//    quad.addColor(ofFloatColor(0,0,0));
//    quad.addVertex(ofVec3f(500, 0, 1));
//    quad.addColor(ofFloatColor(0,0,0));
//    quad.addVertex(ofVec3f(500, 389, 1));
//    quad.addColor(ofFloatColor(0,0,0));
//    quad.addVertex(ofVec3f(0, 389, 1));
//    quad.addColor(ofFloatColor(0,0,0));
//
////    quad.draw();
//    quad.drawWireframe();

    ofSetColor(255, 0, 0);
    ofMesh quad;

      // first triangle
      quad.addVertex(ofVec3f(0, 0, 1));
     quad.addVertex(ofVec3f(500, 0, 1));
      quad.addVertex(ofVec3f(500, 389, 1));
      // second triangle
      quad.addVertex(ofVec3f(500, 389, 1));
      quad.addVertex(ofVec3f(0, 389, 1));
      quad.addVertex(ofVec3f(0, 0, 1));

  
      quad.drawWireframe(); // now you'll see a square
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
