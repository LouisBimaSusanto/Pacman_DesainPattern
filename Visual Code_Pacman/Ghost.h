#ifndef GHOST_H
#define GHOST_H

#include "Pacman.h"
#include "Map.h"

class Ghost
{
protected:
    int x, y;

public:
    Ghost(int startX, int startY); // Hanya deklarasi disini
    virtual ~Ghost() {}

    virtual void move(Pacman &pac, Map &gameMap) = 0;
    // Getter
    int getX() const { return x; }
    int getY() const { return y; }

    // Setter
    void setX(int nx) { x = nx; }
    void setY(int ny) { y = ny; }
};

#endif
