#ifndef FRIGHTENEDSTATE_H
#define FRIGHTENEDSTATE_H

#include "GhostState.h"
#include "Map.h"

class FrightenedState : public GhostState
{
public:
    void move(StateGhost *ghost, Pacman &pac, Map &gameMap) override;
};

#endif
