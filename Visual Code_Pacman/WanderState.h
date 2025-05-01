#ifndef WANDERSTATE_H
#define WANDERSTATE_H

#include "GhostState.h"
#include "Map.h"

class WanderState : public GhostState
{
public:
    void move(StateGhost *ghost, Pacman &pac, Map &gameMap) override;
};

#endif
