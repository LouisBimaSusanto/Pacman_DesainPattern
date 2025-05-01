#ifndef GHOSTDECORATOR_H
#define GHOSTDECORATOR_H

#include "StateGhost.h"

class GhostDecorator : public StateGhost
{
protected:
    StateGhost *wrappedGhost;

public:
    GhostDecorator(StateGhost *ghost)
        : StateGhost(ghost->getX(), ghost->getY()), wrappedGhost(ghost) {}

    virtual void move(Pacman &pac, Map &gameMap) override = 0;

    ~GhostDecorator()
    {
        delete wrappedGhost;
    }
};

#endif
