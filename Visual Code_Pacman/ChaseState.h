#ifndef CHASESTATE_H
#define CHASESTATE_H

#include "GhostState.h"
#include "Map.h"

class ChaseState : public GhostState
{
public:
    void move(StateGhost *ghost, Pacman &pac, Map &gameMap) override;
};

#endif
