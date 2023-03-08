#include "GameObject.hpp"


GameObject::GameObject(){
    cout << "Contructor de GameObject" << endl;
}

GameObject::~GameObject(){
    
    cout << "Destructor de GameObject" << endl;
}

GameObject::GameObject(int x, int y){
    cout << "Contructor de GameObject" << endl;
    pos.x = x;
    pos.y = y;
}

void GameObject::update(){
    pos.y += 1;
}

void GameObject::draw(){
    ofPushMatrix();
    ofPushStyle();
        ofSetColor(255, 0, 0);
        ofTranslate(pos);
        ofDrawCircle(0, 0, 50);
    ofPopStyle();
    ofPopMatrix();
}
