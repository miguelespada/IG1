
#ifndef GameObject_hpp
#define GameObject_hpp

#include "ofMain.h"

class GameObject{
protected:
    ofPoint pos;
    
public:
    
    GameObject();
    ~GameObject();
    GameObject(int x, int y);
    
    virtual void update();
    virtual void draw();
};



#endif /* GameObject_hpp */
