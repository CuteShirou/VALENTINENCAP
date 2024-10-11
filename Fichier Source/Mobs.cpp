#include "Mobs.h"

Mob::Mob(float x, float y, float maxLife, float dirX, float dirY, float speed)
    : Entity(x, y), Alive(maxLife), AMovable(dirX, dirY, speed) {
    std::cout << "Mob just created at x = " << position.getX() << " and y = " << position.getY()
        << " with " << maxLife << " life and direction x = " << dirX << " y = " << dirY << std::endl;
}

void Mob::takeDamage(float damage) {
    Alive::takeDamage(damage);
    if (getCurrentLife() <= 0) {
        std::cout << "Mob just died" << std::endl;
    }
}

void Mob::move() {
    float newX = position.getX() + direction.getX() * speed;
    float newY = position.getY() + direction.getY() * speed;
    setPosition(newX, newY);
    std::cout << "Mob moved to x = " << newX << " and y = " << newY << std::endl;
}
