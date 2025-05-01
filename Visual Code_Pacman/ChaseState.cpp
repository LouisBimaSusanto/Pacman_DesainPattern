#include "ChaseState.h"
#include "StateGhost.h"
#include "Pacman.h"
#include <iostream>

extern Pacman pac; // Ambil data Pacman dari luar (sementara)

void ChaseState::move(StateGhost *ghost, Pacman &pac, Map &gameMap)
{
    int newX = ghost->getX();
    int newY = ghost->getY();

    // Sederhana: kalau ghost x lebih kecil dari pacman, gerak kanan
    if (ghost->getX() < pac.x)
        newX++;
    if (ghost->getX() > pac.x)
        newX--;

    // Kalau ghost y lebih kecil dari pacman, gerak bawah
    if (ghost->getY() < pac.y)
        newY++;
    if (ghost->getY() > pac.y)
        newY--;

    // Pastikan tidak tabrak tembok
    if (newX >= 0 && newX < Map::WIDTH && newY >= 0 && newY < Map::HEIGHT &&
        gameMap.layout[newY][newX] != '#')
    {
        gameMap.layout[ghost->getY()][ghost->getX()] = '.';
        ghost->setPosition(newX, newY);
        gameMap.layout[newY][newX] = 'G';
    }
}