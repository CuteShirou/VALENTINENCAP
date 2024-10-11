#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include "Entity.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mobs.h"
#include "Player.h"

class World {
private:
    std::vector<Entity*> entities;

public:
    void init();

    void step();
};

#endif
