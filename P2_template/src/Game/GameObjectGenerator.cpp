
#include "GameObjectGenerator.h"
#include "Game.h"
#include "Road.h"
#include "Wall.h"
#include "Goal.h"
#include "Coin.h"
#include "Pedestrian.h"

GameObjectGenerator::GameObjectGenerator(Game *game): game(game){}

void GameObjectGenerator::generateWorld(){
    int W = game->ROAD_WIDTH;
    int L = game->ROAD_LENGTH;
    
    glm::vec3 roadPos(0, -50.1, L/2 - 1000);
    auto road = new Road(game, roadPos, glm::vec3(W, 0, L));
    
    game->addGameObject(road);
    
    
//    
//    ofImage circuito;
//    circuito.load("circuito.png");
//
//    int w = circuito.getWidth()/15;
//    int h = circuito.getHeight()/15;
//    circuito.resize(w, h);
//
//    for(int x = 0; x < w; x++){
//        for(int y = 0; y < h; y ++){
//            if(circuito.getColor(x, y).a > 250){
//                auto wall = new Wall(game,
//                                glm::vec3(x * wallSize - 5000, roadPos.y, y * wallSize - 2000),
//                                glm::vec3(wallSize));
//
//                game->addGameObject(wall);
//            }
//        }
//    }

    
    
        int wallSize = 100;
    
    
    
    
    
    // WALL with parts
    for(int l = 0; l < L; l += wallSize){
        auto wall_r = new Wall(game,
                        glm::vec3(-W/2, roadPos.y, l - 1000 + wallSize/2),
                        glm::vec3(wallSize));

        game->addGameObject(wall_r);
    }
    
    // WRONG wall
    
    auto wall_l = new Wall(game,
                    glm::vec3(W/2, roadPos.y, roadPos.z),
                           glm::vec3(wallSize, wallSize, L));
    game->addGameObject(wall_l);
    
    auto goal = new Goal(game,
                    glm::vec3(0, roadPos.y, roadPos.z + L/2),
                           glm::vec3(W, 100, 100));
    game->addGameObject(goal);
    
    
//    auto coin = new Coin(game,
//        glm::vec3(W/2, 50, 500), glm::vec3(50, 100, 50));
//    
//    game->addGameObject(coin);
    
    
    auto pedestrian = new Pedestrian(game,
        glm::vec3(W/2 - 100, -25, 500), glm::vec3(50, 150, 50));

    game->addGameObject(pedestrian);
}
