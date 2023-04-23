#ifndef CollisionEngine_h
#define CollisionEngine_h

#include "ofMain.h"
#include "ofxBullet.h"
class Game;
class GameObject;

class CollisionEngine{
    Game *game;
    
    void onCollision(ofxBulletCollisionData& cdata);
    ofxBulletWorldRigid            world;
    vector <GameObject*> colliders;
    GameObject *targetObject;
    vector<GameObject *> collisions;
    
public:
    CollisionEngine(Game * game);
    ~CollisionEngine();
    void update();
    void add(GameObject *g);
    void remove(GameObject *g);
    
    vector<GameObject *> getCollisions(GameObject *g);
    
    
};

#endif /* CollisionEngine_h */
