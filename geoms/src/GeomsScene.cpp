//
//  GeomsScene.cpp
//  geoms
//
//  Created by Chris Heyes on 30/10/2013.
//
//

#include "GeomsScene.h"


#pragma mark - Class methods

GeomsScene *GeomsScene::create(const char* id)
{
    GeomsScene *instance = (GeomsScene *)Scene::create(id);
    instance->onLoad();
    return instance;
}

GeomsScene* GeomsScene::load(const char* filePath)
{
    GeomsScene *instance = (GeomsScene *)Scene::load(filePath);
    instance->onLoad();
    return instance;
}


#pragma mark - Instance methods

void GeomsScene::onLoad()
{
    // Get light node
    Node* lightNode = this->findNode("directionalLight");
    Light* light = lightNode->getLight();
    
    // Initialize box model
    Node* boxNode = this->findNode("box");
    Model* boxModel = boxNode->getModel();
    Material* boxMaterial = boxModel->setMaterial("res/box.material");
    boxMaterial->getParameter("u_ambientColor")->setValue(this->getAmbientColor());
    boxMaterial->getParameter("u_lightColor")->setValue(light->getColor());
    boxMaterial->getParameter("u_lightDirection")->setValue(lightNode->getForwardVectorView());
    
    // Create physics object
    PhysicsRigidBody::Parameters params;
    params.mass = 10.f;
    boxNode->setCollisionObject(PhysicsCollisionObject::RIGID_BODY,
                                PhysicsCollisionShape::sphere(),
                                &params);
}