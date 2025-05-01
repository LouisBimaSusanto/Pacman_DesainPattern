#ifndef GHOSTSTATE_H
#define GHOSTSTATE_H

class StateGhost;
class Pacman;
class Map;

class GhostState
{
public:
    virtual ~GhostState() {}
    virtual void move(StateGhost *ghost, Pacman &pac, Map &gameMap) = 0;
};

#endif
