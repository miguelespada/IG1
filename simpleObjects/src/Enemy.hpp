#ifndef Enemy_hpp
#define Enemy_hpp

#include "GameObject.hpp"

class Enemy: public GameObject{
    
    public:
    Enemy(int x, int y):GameObject(x, y){};
    void draw() override;
};

#endif /* Enemy_hpp */
