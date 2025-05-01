#include "GhostFactory.h"
#include "Blinky.h"
#include "Pinky.h"
#include "Inky.h"
#include "Clyde.h"

StateGhost *GhostFactory::createGhost(GhostType type, int x, int y)
{
    switch (type)
    {
    case GhostType::BLINKY:
        return new Blinky(x, y);
    case GhostType::PINKY:
        return new Pinky(x, y);
    case GhostType::INKY:
        return new Inky(x, y);
    case GhostType::CLYDE:
        return new Clyde(x, y);
    default:
        return nullptr;
    }
}
