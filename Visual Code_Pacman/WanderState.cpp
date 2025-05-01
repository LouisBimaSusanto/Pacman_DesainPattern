#include "WanderState.h"
#include "StateGhost.h"
#include <iostream>
#include <stdlib.h>

void WanderState::move(StateGhost *ghost, Pacman &pac, Map &gameMap)
{
    int dir = rand() % 4;
    int newX = ghost->getX();
    int newY = ghost->getY();

    switch (dir)
    {
    case 0:
        newX++; // Kanan
        break;
    case 1:
        newX--; // Kiri
        break;
    case 2:
        newY++; // Bawah
        break;
    case 3:
        newY--; // Atas
        break;
    default:
        break;
    }

    if (gameMap.layout[newY][newX] != '#')
    {
        gameMap.layout[ghost->getY()][ghost->getX()] = '.';

        ghost->setPosition(newX, newY);

        gameMap.layout[newY][newX] = 'G';
    }
}