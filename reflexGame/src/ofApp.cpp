#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    prevState = result;
    state = waiting;
    ofSetCircleResolution(100);
    
    myFont.load("Monospace.ttf", 80, true, false);
  
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    for(int i = 0; i < 2; i ++)
        playerScores[i] = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    // Note this is execute when state is changed
    if(prevState != state){
        prevState = state;
        t0 = ofGetElapsedTimef();
        if(state == waiting){
            waitingTime = ofRandom(1, 2);
        
            for(int i = 0; i < 2; i ++){
                randomColors[i] = ofRandom(0, 2);
                randomShapes[i] = ofRandom(0, 2);
            }
            
            if(playerScores[0] + playerScores[1] == 10){
                state = finalScore;
            }
            
        }
        else if (state == result)
            waitingTime = 2;
        
    }
    
    if(state == waiting || state == result){
        if(ofGetElapsedTimef() - t0 > 1){
            nextState();
        }
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    float stringWidth;
    string s;
    switch(state){
        case waiting:
            ofBackground(ofColor::red);
            break;
        case shapes:
            ofBackground(ofColor::blue);
            drawShapes();
            break;
        case result:
            ofBackground(ofColor::green);
            
            ofSetColor(255);
            s = ofToString(ofToString(playerScores[0]) + " - " + ofToString(playerScores[1]));
            stringWidth = myFont.stringWidth(s);
            myFont.drawString(s,ofGetWidth()/2 - stringWidth/2, ofGetHeight()/2);
            break;
        case finalScore:
            ofBackground(ofColor::black);
            
            ofSetColor(255);
            if(playerScores[0] > playerScores[1])
                s = "Player 0 wins";
            else if(playerScores[1] > playerScores[0])
                s = "Player 1 wins";
            else
                s = "It's a draw!!";
            
            stringWidth = myFont.stringWidth(s);
            myFont.drawString(s,ofGetWidth()/2 - stringWidth/2, ofGetHeight()/2);
            break;
        default:
            ofBackground(ofColor::black);
            
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    int player = -1;
    int otherPlayer = -1;
    
    if(key == 'q' || key == 'w') player = 0;
    if(key == 'o' || key == 'p') player = 1;
    
    if(player == -1) return;
    otherPlayer = (player + 1) % 2;
    
    bool isMatched;
    if(key == 'q' || key == 'o') isMatched = isAMatch();
    if(key == 'w' || key == 'p') isMatched = !isAMatch();
    
    if(state == shapes){
        if(isMatched) playerScores[player] += 1;
        else playerScores[otherPlayer] += 1;
        nextState();
    }
    if(state == waiting){
        playerScores[otherPlayer] += 1;
        state = result;
    }
    
   
}

void ofApp::nextState(){
    state = States((int(state) + 1) % 3);
}

void ofApp::drawShapes(){
    ofPoint left(ofGetWidth()/4, ofGetHeight()/2);
    ofPoint right(3*ofGetWidth()/4, ofGetHeight()/2);
    int l = ofGetWidth()/3;

    if(randomColors[0] == 0) ofSetColor(ofColor::darkMagenta);
    else ofSetColor(ofColor::darkCyan);
    if(randomShapes[0] == 0) ofDrawCircle(left, l/2);
    else ofDrawRectangle(left, l, l);
    if(randomColors[1] == 0) ofSetColor(ofColor::darkMagenta);
    else ofSetColor(ofColor::darkCyan);
    if(randomShapes[1] == 0) ofDrawCircle(right, l/2);
    else ofDrawRectangle(right, l, l);
}

bool ofApp::isAMatch(){
    return randomColors[0] == randomColors[1] || randomShapes[0] == randomShapes[1];
}
