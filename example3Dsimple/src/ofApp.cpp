#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    material.setDiffuseColor(ofColor::red);
    material2.setDiffuseColor(ofColor::gray);
    
    light.setup();
    light.setPosition(200, 200, 200);
    light.enable();
    light.setDiffuseColor(ofColor::white);
    
    plane.set(2000, 2000);
    plane.rotateDeg(-90, 1, 0, 0);
    plane.move(0, -50.1, 0);
      
    ofEnableDepthTest();
    
    cam.setPosition(0, 500, -1000);
    
    cam.setNearClip(100);
    speed = 0;
    
    faro1.enable();
    faro1.setParent(box);
    faro1.setDiffuseColor(ofColor::yellow);
    faro1.setSpotlight();
    faro1.move(0, 0, 50);
    faro1.rotateDeg(200, 1, 0, 0);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    cam.setTarget(box);
    box.move(box.getZAxis() * speed);
    
    
    
    if(ofGetKeyPressed(OF_KEY_LEFT))
        box.rotateDeg(1, 0, 2, 0);
    if(ofGetKeyPressed(OF_KEY_RIGHT))
        box.rotateDeg(-1, 0, 2, 0);
    
    if(ofGetKeyPressed(OF_KEY_UP)){
        speed += 0.1;
    }
    
    if(ofGetKeyPressed(OF_KEY_DOWN)){
        speed -= 0.1;
    }
    
    
    cout << box.getZAxis()  << endl;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor::black, ofColor::whiteSmoke);
    ofEnableLighting();
    
    //light.enable();
    faro1.enable();
    
    
    cam.begin();
    light.draw();
    
    material.begin();
    
    box.draw();
    
    box.drawAxes(100);
    
    material.end();
    faro1.draw();
    
    
    material2.begin();
    plane.draw();
    
    material2.end();
    
    
    ofSetColor(0, 255, 0);
    plane.drawNormals(100);
    
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
