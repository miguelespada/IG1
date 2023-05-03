
#include "GameObjectGenerator.h"
#include "Game.h"
#include "Road.h"
#include "Wall.h"
#include "Goal.h"
#include "Coin.h"

GameObjectGenerator::GameObjectGenerator(Game *game): game(game){}

void GameObjectGenerator::generateWorld(){
    int W = game->ROAD_WIDTH;
    int L = game->ROAD_LENGTH;
    
    glm::vec3 roadPos(0, -50.1, L/2 - 1000);
    auto road = new Road(game, roadPos, glm::vec3(W, 0, L));
    
    game->addGameObject(road);
    
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
    
    
    auto coin = new Coin(game,
        glm::vec3(W/2, 50, 500), glm::vec3(50, 100, 50));
    
    game->addGameObject(coin);
}
