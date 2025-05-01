#ifndef STATEGHOST_H
#define STATEGHOST_H

#include "Ghost.h"
#include "GhostState.h"

class StateGhost : public Ghost
{
private:
    GhostState *state;

public:
    StateGhost(int x, int y);
    ~StateGhost();

    void setState(GhostState *newState);
    void move(Pacman &pac, Map &gameMap);

    void setPosition(int newX, int newY);
};

#endif
