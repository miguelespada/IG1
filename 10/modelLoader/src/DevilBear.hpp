//
//  DevilBear.hpp
//  modelLoader
//
//  Created by Miguel Valero Espada on 13/4/23.
//

#ifndef DevilBear_hpp
#define DevilBear_hpp

#include "ofMain.h"
#include "ofxAssimpModelLoader.h"


class DevilBear{
    

    ofxAssimpModelLoader model;
    ofNode node;
    vector<ofSpherePrimitive> colliders;

    public:
    DevilBear();
    
    void draw();
    void update();
    bool checkCollision(ofSpherePrimitive collider);
    
    
};


#endif /* DevilBear_hpp */
