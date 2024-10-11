#ifndef ENTITY_H
#define ENTITY_H

#include "Vector2.h"

class Entity {
protected:
    Vector2 position;

public:
    Entity(float x = 0, float y = 0);

    virtual Vector2 getPosition() const;

    virtual void setPosition(float x, float y);
};

#endif
