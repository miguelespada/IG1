//
//  Player.hpp
//  P2_template
//
//  Created by Miguel Valero Espada on 16/4/23.
//

#ifndef Player_hpp
#define Player_hpp

#include "ofMain.h"
#include "GameObject.h"
class Game;


// TODO add speed settings
#define MAX_SPEED 100

class Player : public GameObject{
    
    ofLight faro;
    float speed;
    bool bLight;
    glm::vec3 prevPos;
    
public:
    
    Player(Game *game);
    ~Player();
    
    void init();
    void update() override;
    void draw() override;
    void checkCollisions() override;
    
    void steerLeft();
    void steerRight();
    void accelerate();
    void toggleLight();
    void brake();
    void stop();
    

};

#endif /* Player_hpp */
