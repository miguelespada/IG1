//
//  myObject.hpp
//  1_objects
//
//  Created by Miguel Valero Espada on 31/12/22.
//

#ifndef myObject_hpp
#define myObject_hpp

#include "ofMain.h"

class MyObject{
    glm::vec3 pos;
    float size;
    int angle;
    ofColor c;
    
public:
    MyObject( glm::vec3 pos, float size): pos(pos), size(size){
        c = ofColor(ofRandom(255), 100, 100);
        angle = 0;
    }
    
    void update(){
        angle = (angle + 1) ;
//        size = int(size + 1) % 400;
    }
    
    void draw(){
        ofSetColor(c);
        ofNoFill();
        ofPushMatrix();
        ofTranslate(pos.x, pos.y);
        ofRotateZDeg(angle);
        ofTranslate(-size/2,-size/2);
        ofDrawRectangle(0, 0, size, size);
        ofPopMatrix();
    }
};

#endif /* myObject_hpp */
