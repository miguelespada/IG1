#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    plane.set(3000, 3000);
    plane.rotateDeg(-90, 1, 0, 0);
    plane.move(0, -50.5, 0);
    material.setDiffuseColor(ofColor::green);
    roadMaterial.setDiffuseColor(ofColor::gray);
    
    light.setup();
    light.setPosition(-200, 200, 200);
    light.setDiffuseColor(ofColor::white);
    light.enable();
    
    ofEnableDepthTest();
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofEnableLighting();
    cam.begin();
    
    material.begin();
  //  box.draw();
    box.drawWireframe();
   // box.drawAxes(50);
     material.end();
    
    roadMaterial.begin();
   // plane.draw();
    plane.drawWireframe();
    plane.drawAxes(100);
    
    roadMaterial.end();
    
    
    
    light.draw();
    cam.end();
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
