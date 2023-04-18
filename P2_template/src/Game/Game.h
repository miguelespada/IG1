#ifndef Game_h
#define Game_h

#include "ofMain.h"
#include "StateMachine.h"
#include "GameObjectContainer.h"
#include "GameObjectGenerator.h"

class Player;

class Game : public StateMachine{
    ofEasyCam cam;
    ofLight light;
    
    Player *player;
    GameObjectContainer *gameObjects = nullptr;
    GameObjectGenerator *generator  = nullptr;
    bool bDebug;
    bool bPlayerFinish;
    
public:
    // TODO create getters
    int L = 10000;
    int W = 2000;
    
    Game();
    void init();
    void update();
    void draw();
    void finishGame();
    void toggleDebug();
    bool isFinished();
    void setFinished(bool v);
    
    Player *getPlayer();
    vector<GameObject *> getCollisions(GameObject *gameObject);
    void addGameObject(GameObject *gameobject);
    
    
};
#endif
