#ifndef IATTACKER_H
#define IATTACKER_H
#include "Alive.h"

class IAttacker {
public:
    virtual void attack(Alive* target) = 0;
};

#endif