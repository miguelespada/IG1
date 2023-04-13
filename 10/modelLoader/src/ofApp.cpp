#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255,255,255);
        
    ofSetVerticalSync(true);
    
    light.setPosition(0, 500, 500);
  
    
    bullet.set(30, 10);
    bullet.setPosition(0, 0, 300);
    
    prevCollision = false;
    bCollision = false;
}
 

//--------------------------------------------------------------
void ofApp::update(){
  
    
    bullet.move(0, 0, -1);
    bear.update();
    bCollision = bear.checkCollision(bullet);
   
    if(!prevCollision &&  bCollision)
        cout << "COLLISTION DETECTED" << endl;
    
    prevCollision = bCollision;
        
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableDepthTest();
    
    light.enable();
    
    cam.begin();
    ofDrawAxis(100);
    
    bear.draw();
    
    if(bCollision)
        ofSetColor(255, 0, 0);
    else
        ofSetColor(0, 255, 0);
    
    bullet.draw();
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
