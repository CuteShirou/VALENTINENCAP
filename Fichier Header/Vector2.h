#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
private:
    float tx;
    float ty;

public:
    Vector2();

    float getX() const;
    float getY() const;

    void setX(float x);
    void setY(float y);
};

#endif
