
#ifndef BoxCollider_h
#define BoxCollider_h

#include "ofMain.h"

class GameObject;

class BoxCollider : public ofBoxPrimitive{
    GameObject *gameObject;
    bool bColliding;
    
public:
    BoxCollider(GameObject *gameObject);
    ~BoxCollider();
    bool collide(BoxCollider *other);
    void drawDebug();
};


#endif /* BoxCollider_h */
