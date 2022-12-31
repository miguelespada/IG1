#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(true);
    ofSetBackgroundColor(0);
    ofSetFrameRate(30);
    
    gui.setup();

    gui.add(angle.set("angle", 0, 0, 360));
    gui.add(scale.set("scale", 1, -10, 10));
    
    
    points.push_back(glm::vec4(0,0,0,1));
    points.push_back(glm::vec4(0,100,0,1));
    points.push_back(glm::vec4(100,100,0,1));
    points.push_back(glm::vec4(100,0,0,1));
    
    matrix = glm::mat4x4(1.0);
    matrix = glm::translate(matrix, glm::vec3(ofGetWidth()/2,  ofGetHeight()/2, 0));
    matrix = glm::scale(matrix, glm::vec3(scale.get(), scale.get(), 1));
    cout << matrix << endl;
    
    cout << "-----" << endl;
    
    matrix_1 = glm::mat4x4(1.0);
    matrix_1 = glm::rotate(matrix_1, glm::radians(angle.get()), glm::vec3(0, 0, 1));

    cout << matrix_1 << endl;
    cout << "-----" << endl;
    
    matrix_1 = glm::mat4x4(1.0);
    matrix_1[0][0] = glm::cos(glm::radians(angle.get())) ;
    matrix_1[1][1] = glm::cos(glm::radians(angle.get())) ;
    matrix_1[0][1] = glm::sin(glm::radians(angle.get())) ;
    matrix_1[1][0] = -glm::sin(glm::radians(angle.get())) ;
    
    cout << matrix_1 << endl;
    cout << "-----" << endl;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    matrix_1 = glm::mat4x4(1.0);
    matrix_1 = glm::translate(matrix_1, glm::vec3(ofGetWidth()/2, ofGetHeight()/2, 0));
    matrix_1 = glm::scale(matrix_1, glm::vec3(scale.get(), scale.get(), 1));
    
    
    // Calculate matrix using glm rotations
    matrix_1 = glm::rotate(matrix_1, glm::radians(angle.get()), glm::vec3(0, 0, 1));
    
    // NOTE: we can calculate the matrix manually
//    glm::mat4x4 rotMat = glm::mat4x4(1.0);
//    rotMat[0][0] = glm::cos(glm::radians(angle)) ;
//    rotMat[1][1] = glm::cos(glm::radians(angle)) ;
//    rotMat[0][1] = glm::sin(glm::radians(angle)) ;
//    rotMat[1][0] = -glm::sin(glm::radians(angle)) ;
//    matrix_1 = matrix_1 * rotMat ;
    
    matrix_1 = glm::translate(matrix_1, glm::vec3(-50, -50, 0));
    
    
}
//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    ofSetColor(255);

    
    ofBeginShape();
    for(auto p: points){
        auto t = matrix * p;
        ofVertex(t.x, t.y);
    }
    ofEndShape();
    
    
    ofSetColor(255, 0, 0);
    
    ofBeginShape();
    for(auto p: points){
        auto t = matrix_1 * p;
        ofVertex(t.x, t.y);
    }
    ofEndShape();
    
    ofSetColor(255, 255, 0);
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofScale(scale.get()/2, scale.get()/2, 1);
    ofRotateZDeg(360 - angle);
    ofTranslate(-50, -50);
    ofBeginShape();
    for(auto p: points){
        ofVertex(p.x, p.y);
    }
    ofEndShape();
    
    ofPopMatrix();
    ofSetColor(255);
    ofDrawLine(0, ofGetHeight()/2, ofGetWidth(), ofGetHeight()/2);
    ofDrawLine( ofGetWidth()/2, 0, ofGetWidth()/2, ofGetHeight());
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
