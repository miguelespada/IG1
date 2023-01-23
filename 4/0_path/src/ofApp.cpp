#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(true);
    ofSetBackgroundColor(0);
    gui.setup();
    gui.add(pct.set("pct", 0, 0, 1));
    
//        path.moveTo(20,20);
//       path.lineTo(100,100);
//       path.lineTo(200,100);
//       path.lineTo(200,400);
       path.setStrokeColor(ofColor::blue);
//       path.setFillColor(ofColor::red);
       path.setFilled(false);
       path.setStrokeWidth(2);
    

//    for( int i = 0; i < 5; i++) {
//        path.arc( i * 50 + 20, i * 50 + 20, i * 40 + 10, i * 40 + 10, 0, 360); // creates a new ofSubPath
//        path.close();
//    }
    
    path.moveTo(ofPoint(200, 400));
    path.bezierTo(100, 100, 800, 100, 700, 400);
    
    
    polyline.lineTo(100,100);
    polyline.lineTo(400,200);
    polyline.lineTo(300,400);
    polyline.lineTo(80,20);
    i = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    i += 1;
    if(i > polyline.getLengthAtIndex(4)) i = 0;
   
    
}
//--------------------------------------------------------------
void ofApp::draw(){
    path.draw();
    gui.draw();
    
    
    ofPoint centroid = polyline.getCentroid2D();
    
    polyline.draw();
  
    ofPoint p = polyline.getPointAtPercent(pct);
    ofDrawCircle(p,5);
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
