#ifndef ALIVE_H
#define ALIVE_H

class Alive {
protected:
    float maxLife;
    float currentLife;

public:
    Alive(float maxLife);

    virtual float getMaxLife() const;
    virtual float getCurrentLife() const;

    virtual void takeDamage(float damage);
};

#endif
