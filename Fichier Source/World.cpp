#include "World.h"
#include <iostream>

void World::init() {
    StaticObject* staticObj = new StaticObject(1.0f, 1.0f);
    BreakableObject* breakableObj = new BreakableObject(2.0f, 3.0f, 1.0f);
    Mob* mob = new Mob(4.0f, 5.0f, 20.0f, 0.5f, 0.5f, 1.5f);
    Player* player = new Player(0.0f, 0.0f, 10.0f, 1.0f, 1.0f, 2.0f);

    entities.push_back(staticObj);
    entities.push_back(breakableObj);
    entities.push_back(mob);
    entities.push_back(player);

    std::cout << "World initialized with StaticObject, BreakableObject, Mob, and Player." << std::endl;
}

void World::step() {
    BreakableObject* breakableObj = nullptr;
    Mob* mob = nullptr;
    Player* player = nullptr;

    for (Entity* entity : entities) {
        if (BreakableObject* obj = dynamic_cast<BreakableObject*>(entity)) {
            breakableObj = obj;
        }
        if (Mob* m = dynamic_cast<Mob*>(entity)) {
            mob = m;
        }
        if (Player* p = dynamic_cast<Player*>(entity)) {
            player = p;
        }
    }

    if (mob && mob->getCurrentLife() > 0 && player) {
        mob->move();
        player->attack(mob);
    }
    else if (player && breakableObj && breakableObj->getCurrentLife() > 0) {
        player->attack(breakableObj);
    }

    bool simulationFinished = true;
    if (mob && mob->getCurrentLife() > 0) {
        simulationFinished = false;
    }
    if (breakableObj && breakableObj->getCurrentLife() > 0) {
        simulationFinished = false;
    }

    if (simulationFinished) {
        std::cout << "Simulation Finished" << std::endl;
    }
}
