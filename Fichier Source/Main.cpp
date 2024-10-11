#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mobs.h"
#include "Player.h"
#include "World.h"

int main() {
    StaticObject staticObj(1.0f, 1.0f);

    BreakableObject breakableObj(2.0f, 3.0f, 40.0f);

    Mob mob(4.0f, 5.0f, 100.0f, 0.5f, 0.5f, 2.0f);

    Player player(0.0f, 0.0f, 100.0f, 1.0f, 1.0f, 3.0f);

    player.move();

    player.attack(&breakableObj);

    mob.move();

    mob.takeDamage(50.0f);

    player.takeDamage(20.0f);

    breakableObj.takeDamage(30.0f);

    World world;
    world.init();

    bool simulationFinished = false;
    while (!simulationFinished) {
        world.step();
        simulationFinished = true;
    }

    return 0;
}
