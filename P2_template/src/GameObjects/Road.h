//
//  Road.h
//  P2_template
//
//  Created by Miguel Valero Espada on 18/4/23.
//

#ifndef Road_h
#define Road_h

#include "GameObject.h"

class Road : public GameObject{
    
    
    ofPlanePrimitive plane;
public:
    Road(Game *game, glm::vec3 pos, glm::vec3 dim);
    ~Road();
    
    void draw() override;
    void drawDebug() override;
    
};

#endif /* Road_h */
