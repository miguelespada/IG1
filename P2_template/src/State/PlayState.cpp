#include "PlayState.h"
#include "ResultState.h"
#include "Player.h"

PlayState::PlayState(Game *game): State(game, "Play State"){
    game->init();
};

void PlayState::update(){
    game->update();
    
    if(ofGetKeyPressed(OF_KEY_LEFT))
        game->getPlayer()->steerLeft();
    if(ofGetKeyPressed(OF_KEY_RIGHT))
        game->getPlayer()->steerRight();
    if(ofGetKeyPressed(OF_KEY_UP))
        game->getPlayer()->accelerate();
    if(ofGetKeyPressed(OF_KEY_DOWN))
        game->getPlayer()->brake();
};
    
void PlayState::draw(){
    ofBackground(0);
    ofDrawBitmapString(name, 10, 20);
    game->draw();
};

void PlayState::next(){
    game->setState(new ResultState(game));
    
};


void PlayState::keyPressed(int key){
    if(key == 'l')
        game->getPlayer()->toggleLight();
    if(key == 'd')
        game->toggleDebug();
}
