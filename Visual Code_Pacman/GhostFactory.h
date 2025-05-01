#ifndef GHOSTFACTORY_H
#define GHOSTFACTORY_H

#include "GhostType.h"
#include "StateGhost.h"

class GhostFactory
{
public:
    static StateGhost *createGhost(GhostType type, int x, int y);
};

#endif
