//#include <iostream>
//#include "Vector2.h"
//#include "Alive.h"
//#include "AMovable.h"
//#include "Entity.h"
//#include "IAttacker.h"
//#include "StaticObject.h"
//#include "BreakableObject.h"
//#include "Mobs.h"
//#include "Player.h"
//
//int main() {
//    Vector2 position;
//
//    std::cout << "Position initiale: (" << position.getX() << ", " << position.getY() << ")" << std::endl;
//
//    position.setX(4.f);
//    position.setY(4.f);
//
//    std::cout << "Nouvelle position: (" << position.getX() << ", " << position.getY() << ")" << std::endl;
//
//    Entity entity(5.0f, 10.0f);
//
//    Vector2 pos = entity.getPosition();
//    std::cout << "Position de l'entité: (" << pos.getX() << ", " << pos.getY() << ")" << std::endl;
//
//    entity.setPosition(7.5f, 12.0f);
//
//    pos = entity.getPosition();
//    std::cout << "Nouvelle position de l'entité: (" << pos.getX() << ", " << pos.getY() << ")" << std::endl;
//
//    Alive alive(100.0f);
//
//    std::cout << "Vie maximale: " << alive.getMaxLife() << std::endl;
//    std::cout << "Vie actuelle: " << alive.getCurrentLife() << std::endl;
//
//    alive.takeDamage(30.0f);
//
//    std::cout << "Vie après avoir pris 30 points de degats: " << alive.getCurrentLife() << std::endl;
//
//    alive.takeDamage(80.0f);
//
//    std::cout << "Vie après avoir pris 80 points de degats: " << alive.getCurrentLife() << std::endl;
//
//    StaticObject obj(5.0f, 10.0f);
//    
//	BreakableObject breakable(3.0f, 6.0f, 50.0f);
//
//	std::cout << "Vie de l'objet cassable: " << breakable.getCurrentLife() << std::endl;
//
//	breakable.takeDamage(40.0f);
//
//    Mob mob(1.0f, 2.0f, 100.0f, 0.5f, 0.5f, 2.0f);
//
//    std::cout << "Vie actuelle: " << mob.getCurrentLife() << std::endl;
//   
//    mob.move();
//
//    mob.takeDamage(50.0f);
//
//    mob.takeDamage(60.0f);
//
//    Player player(0.0f, 0.0f, 100.0f, 1.0f, 1.0f, 3.0f);
//
//    BreakableObject target(4.0f, 4.0f, 50.0f);
//
//    player.move();
//
//    player.attack(&target);
//
//    player.takeDamage(30.0f);
//
//    player.takeDamage(80.0f);
//
//    return 0;
//}