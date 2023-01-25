#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(true);
    ofSetBackgroundColor(0);
    int i, j = 0;
       for ( i = 0; i < 12; i++ )
       {

           c[i].r = ofRandom(1.0);
           c[i].g = ofRandom(1.0);
           c[i].b = ofRandom(1.0);

           v[i][0] = Verts[j] * 100.f;
           j++;
           v[i][1] = Verts[j] * 100.f;
           j++;
           v[i][2] = Verts[j] * 100.f;
           j++;

       }

       vbo.setVertexData( &v[0], 12, GL_STATIC_DRAW );
       vbo.setColorData( &c[0], 12, GL_STATIC_DRAW );
       vbo.setIndexData( &Faces[0], 60, GL_STATIC_DRAW );

       glEnable(GL_DEPTH_TEST);
}

//--------------------------------------------------------------
void ofApp::update(){
    
   
    
}
//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 100);
    ofRotate(ofGetElapsedTimef() * 20.0, 1, 1, 0);
    glPointSize(10.f);
    //  vbo.drawElements( GL_TRIANGLES, 60);
    //  vbo.drawElements( GL_POINTS, 60);
      vbo.drawElements( GL_LINES, 60);
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
