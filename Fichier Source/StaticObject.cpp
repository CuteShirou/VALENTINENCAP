#include "StaticObject.h"

StaticObject::StaticObject(float x, float y) : Entity(x, y) {
    std::cout << "Static Object just created at x = " << position.getX()
        << " and y = " << position.getY() << std::endl;
}
