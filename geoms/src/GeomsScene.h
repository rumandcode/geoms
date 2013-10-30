//
//  GeomsScene.h
//  geoms
//
//  Created by Chris Heyes on 30/10/2013.
//
//

#ifndef __geoms__GeomsScene__
#define __geoms__GeomsScene__

#include "gameplay.h"
using namespace gameplay;

/**
 * GeomsScene represents a game scene
 */
class GeomsScene: public Scene
{
public:
    /**
     * @see Scene::create
     */
    static GeomsScene* create(const char* id = NULL);
    
    /**
     * @see Scene::load
     */
    static GeomsScene* load(const char* filePath);
    
    
protected:
    /**
     * Called immediately after create() or load()
     */
    void onLoad();
    
    
public:
    /**
     * Constructor.
     */
    GeomsScene();
    
    /**
     * Destructor.
     */
    virtual ~GeomsScene();
};


#endif /* defined(__geoms__GeomsScene__) */
