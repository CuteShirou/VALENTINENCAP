#ifndef MOB_H
#define MOB_H

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include <iostream>

class Mob : public Entity, public Alive, public AMovable {
public:
    Mob(float x, float y, float maxLife, float dirX, float dirY, float speed);

    void takeDamage(float damage) override;

    void move() override;
};

#endif
