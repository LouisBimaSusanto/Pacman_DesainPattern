#ifndef RETURNTOBASESTATE_H
#define RETURNTOBASESTATE_H

#include "GhostState.h"
#include "Map.h"

class ReturnToBaseState : public GhostState
{
public:
    void move(StateGhost *ghost, Pacman &pac, Map &gameMap) override;
};

#endif
