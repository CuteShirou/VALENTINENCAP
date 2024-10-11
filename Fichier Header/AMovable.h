#ifndef AMOVABLE_H
#define AMOVABLE_H

#include "Vector2.h"

class AMovable {
protected:
    Vector2 direction;
    float speed;

public:
    AMovable(float dirX = 0, float dirY = 0, float speed = 0);

    virtual void setDirection(float x, float y);
    virtual void setSpeed(float speed);

    virtual void move() = 0;
};

#endif
