#include "FrightenedState.h"
#include "StateGhost.h"
#include <iostream>
#include <cstdlib>

void FrightenedState::move(StateGhost *ghost, Pacman &pac, Map &gameMap)
{
    int dir = rand() % 4;
    int newX = ghost->getX();
    int newY = ghost->getY();

    switch (dir)
    {
    case 0:
        newX++;
        break;
    case 1:
        newX--;
        break;
    case 2:
        newY++;
        break;
    case 3:
        newY--;
        break;
    }

    if (newX >= 0 && newX < Map::WIDTH && newY >= 0 && newY < Map::HEIGHT &&
        gameMap.layout[newY][newX] != '#')
    {
        gameMap.layout[ghost->getY()][ghost->getX()] = '.';
        ghost->setPosition(newX, newY);
        gameMap.layout[newY][newX] = 'G';
    }
}