#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    material.setDiffuseColor(ofColor::white);

    light.setPosition(200, 200, 200);
    light.setDiffuseColor(ofColor::white);
    plane.set(2000, 2000);
    plane.rotateDeg(-90, 1, 0, 0);
    plane.move(0, -50.1, 0);

    ofEnableDepthTest();

    cam.setPosition(0, 500, -1000);
    cam.setNearClip(100);
    cam.setFov(60);

    
    ofEnableNormalizedTexCoords();
    ofDisableArbTex();
    
    fbo.allocate(400, 400);
    
    
 
}

//--------------------------------------------------------------
void ofApp::update(){
    
    cam.setTarget(plane);
   
    fbo.begin();
    {
        ofBackground(255);
        for(int i = 0; i < 100; i ++){
            ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
            ofDrawCircle(ofRandom(400), ofRandom(400),10);
        }
    }
    fbo.end();
    
 
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    ofEnableLighting();

    light.enable();
    
    
    cam.begin();
    {
        material.begin();
        {
            fbo.getTexture().bind();
            {
                plane.draw();
            }
            fbo.getTexture().unbind();
        }
        material.end();
    }
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
