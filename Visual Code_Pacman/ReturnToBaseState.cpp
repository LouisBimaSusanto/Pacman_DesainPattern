#include "ReturnToBaseState.h"
#include "StateGhost.h"
#include <iostream>

void ReturnToBaseState::move(StateGhost *ghost, Pacman &pac, Map &gameMap)
{
    // Anggap markas ada di (1,1)
    int baseX = 1;
    int baseY = 1;

    int newX = ghost->getX();
    int newY = ghost->getY();

    if (ghost->getX() < baseX)
        newX++;
    if (ghost->getX() > baseX)
        newX--;
    if (ghost->getY() < baseY)
        newY++;
    if (ghost->getY() > baseY)
        newY--;

    if (newX >= 0 && newX < Map::WIDTH && newY >= 0 && newY < Map::HEIGHT &&
        gameMap.layout[newY][newX] != '#')
    {
        gameMap.layout[ghost->getY()][ghost->getX()] = '.';
        ghost->setPosition(newX, newY);
        gameMap.layout[newY][newX] = 'G';
    }
}