
#include "Enemy.hpp"


void Enemy::draw(){
    ofPushMatrix();
    ofPushStyle();
    ofColor(0, 0, 255);
    ofTranslate(pos);
    ofDrawRectangle(0, 0, 50, 50);
    ofPopStyle();
    ofPopMatrix();
}
