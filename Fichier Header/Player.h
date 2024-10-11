#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include <iostream>

class Player : public Entity, public Alive, public AMovable, public IAttacker {
public:
    Player(float x, float y, float maxLife, float dirX, float dirY, float speed);

    void takeDamage(float damage) override;
    
    void move() override;

    void attack(Alive* target) override;
};

#endif
