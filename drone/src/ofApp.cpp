#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.setPosition(600, 20);
    gui.add(speed.set("speed", 1, 0, 20));
    
    l = 200;
    w = 100;
    h = 20;
    rotation = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    rotation += speed;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    
    
    
    ofPushMatrix();
    {
        ofTranslate(mouseX, mouseY);
        ofScale(2, 2);
     
        ofRotateDeg(rotation, 0, 0, -1);
        
        ofTranslate(-l/2, -l/2);
        ofDrawRectangle(0, 0, l, l);
        
        drawAspa(0, 0);
        drawAspa(l, 0);
        drawAspa(0, l);
        drawAspa(l, l);
        
        
    }
    ofPopMatrix();
    
    
    gui.draw();
    
}

void ofApp::drawAspa(int x, int y){

    
    ofPushMatrix();
    ofTranslate(x, y);
    ofRotateDeg(rotation, 0, 0, 1);
    ofTranslate(-w/2, -h/2);
    ofDrawRectangle(0, 0, w, h);
    
    
    ofPushMatrix();
    
    ofTranslate(w/2, 0);
    ofDrawCircle(0, 0, h);
    
    ofPopMatrix();
    
    ofPopMatrix();
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
//
//
//ofPushMatrix();
//ofNoFill();
//ofTranslate(mouseX, mouseY);
//// ofRotateDeg(360 - value, 0, 0, 1);
//ofTranslate(-l/2, -l/2);
//ofDrawRectangle(0, 0, l, l);
//
//
//ofPushMatrix();
//ofRotateDeg(value, 0, 0, 1);
//ofTranslate(-l_w/2, -l_h/2);
//ofDrawRectangle(0, 0, l_w, l_h);
//ofPopMatrix();
//
//ofPushMatrix();
//ofTranslate(l, 0);
//ofRotateDeg(value, 0, 0, 1);
//ofTranslate(-l_w/2, -l_h/2);
//ofDrawRectangle(0, 0, l_w, l_h);
//ofPopMatrix();
//
//ofPushMatrix();
//ofTranslate(0, l);
//ofRotateDeg(value, 0, 0, 1);
//ofTranslate(-l_w/2, -l_h/2);
//ofDrawRectangle(0, 0, l_w, l_h);
//ofPopMatrix();
//
//
//ofPushMatrix();
//ofTranslate(l, l);
//ofRotateDeg(value, 0, 0, 1);
//ofTranslate(-l_w/2, -l_h/2);
//ofDrawRectangle(0, 0, l_w, l_h);
//ofPopMatrix();
//ofPopMatrix();
//
//gui.draw();

//
//
//ofNoFill();
//
//ofPushMatrix();
//ofTranslate(mouseX, mouseY);
//ofTranslate(-l/2, -l/2);
//ofDrawRectangle(0, 0, l, l);
//
//
//ofTranslate(-l_w/2, -l_h/2);
//
//ofPushMatrix();
//ofTranslate(0, 0);
//ofDrawRectangle(0, 0, l_w, l_h);
//ofPopMatrix();
//
//ofPushMatrix();
//ofTranslate(l, 0);
//ofDrawRectangle(0, 0, l_w, l_h);
//ofPopMatrix();
//
//ofPushMatrix();
//ofTranslate(0, l);
//ofDrawRectangle(0, 0, l_w, l_h);
//ofPopMatrix();
//
//ofPushMatrix();
//ofTranslate(l, l);
//ofDrawRectangle(0, 0, l_w, l_h);
//ofPopMatrix();
//
//ofPopMatrix();
