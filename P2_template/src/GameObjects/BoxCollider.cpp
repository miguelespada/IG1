#include "BoxCollider.h"
#include "GameObject.h"

BoxCollider::BoxCollider(GameObject *gameObject):gameObject(gameObject){
    bColliding = false;
    
}
BoxCollider::~BoxCollider(){}


bool BoxCollider::collide(BoxCollider *other){
    return false;
}

void BoxCollider::drawDebug(){
    ofPushStyle();
    if(bColliding)
        ofSetColor(255, 0, 0);
    drawWireframe();
    ofPopStyle();
    
}
