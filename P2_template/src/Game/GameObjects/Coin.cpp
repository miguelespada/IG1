#include "Coin.h"
#include "Player.h"
#include "Game.h"


Coin::Coin(Game *game, glm::vec3 pos, glm::vec3 dim):
    GameObject(game, pos, dim){
    material.setDiffuseColor(ofColor::yellow);
        
    model.loadModel("astroBoy_walk.dae", false);
    model.setRotation(0, 180, 1, 0, 0);
    model.setScale(0.3, 0.3, 0.3);
    model.setPosition(0, -50, 0);
    model.setLoopStateForAllAnimations(OF_LOOP_NORMAL);
    model.playAllAnimations();
        
        transform.rotateDeg(90, 0, 1, 0);
    
}
Coin::~Coin(){
    
}


void Coin::update(){
    model.update();
    transform.move(transform.getZAxis() * -5);
}

void Coin::draw(){
    transform.transformGL();
    model.drawFaces();
    ofDrawAxis(200);
    transform.restoreTransformGL();
    
    material.begin();
    {
        collider->drawWireframe();
    }
    material.end();
}

void Coin::receiveCarCollision(Player *car){
    car->addCoins(5);
    bAlive = false;
}

void Coin::receiveBulletCollision(GameObject *bullet){
    bullet->kill();
    kill();
    game->getPlayer()->addCoins(1000);
}
