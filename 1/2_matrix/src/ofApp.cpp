#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofSetBackgroundColor(0);
    points.push_back(glm::vec4(0,0,0,1));
    points.push_back(glm::vec4(0,100,0,1));
    points.push_back(glm::vec4(100,100,0,1));
    points.push_back(glm::vec4(100,0,0,1));
    
    matrix = glm::mat4x4(1.0);
    matrix = glm::translate(matrix, glm::vec3(200, 200, 0));
    matrix = glm::scale(matrix, glm::vec3(2, 2, 1));
    cout << matrix << endl;
    
    cout << "-----" << endl;
    
    matrix_1 = glm::mat4x4(1.0);
    matrix_1 = glm::scale(matrix_1, glm::vec3(2, 2, 1));
    matrix_1 = glm::translate(matrix_1, glm::vec3(200, 200, 0));

    cout << matrix_1 << endl;
}

//--------------------------------------------------------------
void ofApp::update(){
}
//--------------------------------------------------------------
void ofApp::draw(){
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
