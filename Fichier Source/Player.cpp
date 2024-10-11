#include "Player.h"

Player::Player(float x, float y, float maxLife, float dirX, float dirY, float speed)
    : Entity(x, y), Alive(maxLife), AMovable(dirX, dirY, speed) {
    std::cout << "Player just created at x = " << position.getX() << " and y = " << position.getY()
        << " with " << maxLife << " life and direction x = " << dirX << " y = " << dirY << std::endl;
}

void Player::takeDamage(float damage) {
    Alive::takeDamage(damage);
    if (getCurrentLife() <= 0) {
        std::cout << "Player just died" << std::endl;
    }
}

void Player::move() {
    float newX = position.getX() + direction.getX() * speed;
    float newY = position.getY() + direction.getY() * speed;
    setPosition(newX, newY);
    std::cout << "Player moved to x = " << newX << " and y = " << newY << std::endl;
}

void Player::attack(Alive* target) {
    if (target) {
        target->takeDamage(10);
        std::cout << "Player just attacked." << std::endl;
    }
}
