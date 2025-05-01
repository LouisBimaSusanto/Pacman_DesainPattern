#ifndef SPEEDBOOSTDECORATOR_H
#define SPEEDBOOSTDECORATOR_H

#include "GhostDecorator.h"

class SpeedBoostDecorator : public GhostDecorator
{
public:
    SpeedBoostDecorator(StateGhost *ghost)
        : GhostDecorator(ghost) {}

    void move(Pacman &pac, Map &gameMap) override;
};

#endif
