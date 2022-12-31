#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    ofSetFrameRate(30);
    gui.setup();
    gui.add(color.setup("color", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255)));

}

//--------------------------------------------------------------
void ofApp::update(){
        
    ofColor c = color;
    
    auto b =  0.2126*c.r + 0.7152*c.g + 0.0722*c.b;
    cout << "Luminance:" << b << endl;
}
//--------------------------------------------------------------
void ofApp::draw(){
    
    int D = 100;
    int l = ofGetWidth() / D;
    
    for(int i = 0; i < D; i++){
        for(int j = 0; j < D; j++){
            float hue = 0;  // The hue value to set.
            float saturation = 0; // The saturation value to set.
            float brightness = 0; // The brightness value to set.
            ofColor original = color;
            original.getHsb(hue, saturation, brightness);
            
            brightness *= (i / float(D));
            saturation *= (j / float(D));
            
            ofColor c = ofColor::fromHsb(hue, saturation, brightness);
            ofSetColor(c);
            ofFill();
            ofDrawRectangle(i * l, j * l, l, l);
            
            ofSetColor(255,100);
            ofNoFill();
            ofDrawRectangle(i * l, j * l, l, l);
        
        }
    }
    
    gui.draw();
    
    
    // c.lerp(c2, 0.5);
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
