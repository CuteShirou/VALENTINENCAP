#include "AMovable.h"

AMovable::AMovable(float dirX, float dirY, float speed) {}

void AMovable::setDirection(float x, float y) {
    direction.setX(x);
    direction.setY(y);
}

void AMovable::setSpeed(float speed) {
    this->speed = speed;
}
