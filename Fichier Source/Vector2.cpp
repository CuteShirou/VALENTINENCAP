#include "Vector2.h"
#include <iostream>

Vector2::Vector2()
{
    tx = 0;
    ty = 0;
}

float Vector2::getX() const {
    return tx;
}

float Vector2::getY() const {
    return ty;
}

void Vector2::setX(float x) {
    tx = x;
}

void Vector2::setY(float y) {
    ty = y;
}