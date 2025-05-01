#include "SpeedBoostDecorator.h"

void SpeedBoostDecorator::move(Pacman &pac, Map &gameMap)
{
    // Bergerak dua kali per tick
    wrappedGhost->move(pac, gameMap);
    wrappedGhost->move(pac, gameMap);
}
