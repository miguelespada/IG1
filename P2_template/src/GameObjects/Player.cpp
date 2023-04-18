#include "Player.h"
#include "Game.h"

Player::Player(Game *game):GameObject(game, glm::vec3(0, 0, 0)){
    
    material.setDiffuseColor(ofColor::blue);
    
    faro.setParent(transform);
    faro.setDiffuseColor(ofColor::yellow);
    faro.setSpotlight();
    faro.move(0, 0, 50);
    faro.rotateDeg(-200, 1, 0, 0);
    
    collider.setParent(transform);
    collider.set(100);
    
}
Player::~Player(){}

void Player::init(){
    transform.setPosition(0, 0, 0);
    speed = 0;
    bLight = false;
}

void Player::update(){
    
    prevPos = transform.getPosition();
    transform.move(transform.getZAxis() * speed);
    
    if(speed > MAX_SPEED) speed = MAX_SPEED;
    if(speed < 0) speed = 0;
}

void Player::draw(){
    
    faro.draw();
    if(bLight)
        faro.enable();
    else
        faro.disable();
    
    material.begin();
    {
        collider.draw();
        transform.transformGL();
        ofDrawAxis(100);
        transform.restoreTransformGL();
    }
    material.end();
}

void Player::checkCollisions(){
    vector<GameObject*> collisions = game->getCollisions(this);
    for(auto c: collisions){
        c->receiveCarCollision(this);
    }
}



void Player::steerLeft(){
    transform.rotateDeg(1, 0, 2, 0);
}
void Player::steerRight(){
    transform.rotateDeg(-1, 0, 2, 0);
}
void Player::accelerate(){
    speed += 0.1;
}
void Player::brake(){
    speed -= 0.1;
}

void Player::stop(){
    speed = 0;
    transform.setPosition(prevPos);
}

void Player::toggleLight(){
    bLight = !bLight;
}

