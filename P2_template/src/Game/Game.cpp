

#include "Game.h"
#include "Player.h"



Game::Game(){
    // TODO move to settings
    L = 10000;
    W = 2000;
    
    
    light.setPosition(200, 200, 200);
    light.setDiffuseColor(ofColor::white);
    
    generator = new GameObjectGenerator(this);
    bDebug = false;
}

void Game::init(){
    
    if(gameObjects != nullptr)
        delete gameObjects;
    
    gameObjects = new GameObjectContainer();
    
    player = new Player(this);
    player->init();

    cam.setPosition(0, 300, -600);
    cam.setTarget(player->transform);
    cam.setParent(player->transform);
    
    
    gameObjects->add(player);
    generator->generateWorld();
    bPlayerFinish = false;
}

void Game::update(){
    gameObjects->update();
}


void Game::draw(){
    ofEnableLighting();
    light.enable();
    
    ofEnableDepthTest();
    cam.begin();
    {
        if(bDebug)
            gameObjects->drawDebug();
        else
            gameObjects->draw();
            
    }
    cam.end();
}


Player * Game::getPlayer(){
    return player;
}

vector<GameObject *> Game::getCollisions(GameObject *gameObject){
    return gameObjects->getCollisions(gameObject);
}

void  Game::addGameObject(GameObject *gameobject){
    gameObjects->add(gameobject);
}

void Game::finishGame(){
    bPlayerFinish = true;
}

void Game::toggleDebug(){
    bDebug = !bDebug;
}

bool Game::isFinished(){
    return bPlayerFinish;
}

void Game::setFinished(bool v){
    bPlayerFinish = v;
}
