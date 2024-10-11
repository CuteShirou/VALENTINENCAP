#include "Alive.h"
#include <iostream>

Alive::Alive(float maxLife) : maxLife(maxLife), currentLife(maxLife) {}

float Alive::getMaxLife() const {
    return maxLife;
}

float Alive::getCurrentLife() const {
    return currentLife;
}

void Alive::takeDamage(float damage) {
    currentLife -= damage;
    if (currentLife <= 0) currentLife = 0;
}