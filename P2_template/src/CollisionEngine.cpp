#include "CollisionEngine.h"
#include "GameObject.h"
#include "Game.h";

CollisionEngine::CollisionEngine(Game * game):game(game){
    
    world.setup();
    world.enableCollisionEvents();
 //   ofAddListener(world.COLLISION_EVENT, this,);
    world.setGravity( ofVec3f(0, 0, 0) );
    world.disableGrabbing();
    
    ofCamera dummy;
    world.setCamera(&dummy);
    
};
CollisionEngine::~CollisionEngine(){};


void CollisionEngine::add(GameObject *g){
    ofxBulletBox* box = new ofxBulletBox();
    BoxCollider *b = g->getCollider();
    box->init(ofBtGetBoxCollisionShape(b->getWidth(), b->getHeight(),  b ->getDepth()));
    box->create(world.world, b->getGlobalPosition());
    box->setActivationState( DISABLE_DEACTIVATION );
    box->add();
    box->enableKinematic();
    box->activate();
    b->collisionObject = box;
    colliders.push_back(g);

};

void CollisionEngine::update(){
    for(auto g: colliders){
        
        BoxCollider *b = g->getCollider();
        
        btTransform transform;
        b->collisionObject->getRigidBody()->getMotionState()->getWorldTransform(transform);
        transform.setFromOpenGLMatrix(glm::value_ptr(b->getGlobalTransformMatrix()));
        b->collisionObject->getRigidBody()->getMotionState()->setWorldTransform(transform);
        b->setColliding(false);
        
    }
    
};

vector<GameObject *> CollisionEngine::getCollisions(GameObject *g){
    collisions.clear();
    world.update();
    
    struct    MyContactResultCallback : public btCollisionWorld::ContactResultCallback
        {
            bool bCollison;
            MyContactResultCallback(){
                bCollison = false;
            }
            virtual    btScalar    addSingleResult(btManifoldPoint& cp,    const btCollisionObjectWrapper* colObj0Wrap,int partId0,int index0,const btCollisionObjectWrapper* colObj1Wrap,int partId1,int index1)
            {
                bCollison = true;
                return 1.f;
            }
        };

    
    
    auto cw = world.getWorld()->getCollisionWorld();
    
    for(auto other: colliders){
        if(g != other){
            MyContactResultCallback m_resultCallback;
            
            cw->contactPairTest(g->getCollider()->collisionObject->getCollisionObject(),
                                other->getCollider()->collisionObject->getCollisionObject(),
                                m_resultCallback);
            if(m_resultCallback.bCollison){
                collisions.push_back(other);
            }
        }
            
    }
        
    return collisions;
    
};

void CollisionEngine::remove(GameObject *g){
    for (auto it = colliders.begin(); it != colliders.end(); ++it) {
        if (*it == g) {
            colliders.erase(it);
            break;
        }
    }
    g->getCollider()->collisionObject->remove();
};

