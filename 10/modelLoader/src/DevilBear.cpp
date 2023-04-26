
#include "DevilBear.hpp"

DevilBear::DevilBear(){
    // load the first model
    model.loadModel("teddy.obj");
    node.rotateDeg(180, 0, 0, 1);
    
    float size = model.getNormalizedScale();
    
    glm::vec3 maxP = model.getSceneMax() * size;
    glm::vec3 minP = model.getSceneMin() * size;
    glm::vec3 dist = (maxP - minP);
    glm::vec3 center = model.getSceneCenter() * size ;
    
    ofSpherePrimitive s;
    s.setParent(node);
    s.setPosition(center);
    s.set(dist.z / 2.5, 10);
    s.move(0, dist.z/3, 0);
    
    
    colliders.push_back(s);
    
    ofSpherePrimitive s2;
    s2.setParent(node);
    s2.setPosition(center);
    s2.set(dist.z / 2.5, 10);
    s2.move(0, -dist.z/3, 0);
    
    colliders.push_back(s2);
    
}

void DevilBear::draw(){
    node.transformGL();
    {

        ofSetColor(255);
        model.drawFaces();

        ofDrawAxis(10);
    }
    node.restoreTransformGL();

    ofSetColor(0, 255, 0);
    for(auto s: colliders)
        s.drawWireframe();
}
void DevilBear::update(){
    node.move(1, 0, 0);
    node.rotateDeg(1, 1, 1, 0);
}

bool  DevilBear::checkCollision(ofSpherePrimitive collider){
    
    for(auto c: colliders){
        float dist = glm::distance(collider.getGlobalPosition() ,
                                  c.getGlobalPosition());
        
        float rad = collider.getRadius() + c.getRadius();
        
        if(dist < rad){
            return true;
        }
    }
    return false;
}
