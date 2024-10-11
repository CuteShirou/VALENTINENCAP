#include "BreakableObject.h"

BreakableObject::BreakableObject(float x, float y, float maxLife) : Entity(x, y), Alive(maxLife) {
	std::cout << "BreakableObject a ete cree en x = " << position.getX() << " & en y = " << position.getY() << " avec " << maxLife << " vie " << std::endl;
}

void BreakableObject::takeDamage(float damage) {
	Alive::takeDamage(damage);
	if (getCurrentLife() <= 0) {
		std::cout << "BreakableObject a ete detruit" << std::endl;
	}
}