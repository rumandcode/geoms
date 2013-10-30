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
    
}