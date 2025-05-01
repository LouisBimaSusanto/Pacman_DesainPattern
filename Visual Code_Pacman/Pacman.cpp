#include "Pacman.h"
#include <iostream>

Pacman::Pacman(int startX, int startY) : x(startX), y(startY) {}

void Pacman::move(int dx, int dy, Map &gameMap)
{
    int newX = x + dx;
    int newY = y + dy;

    // Cek apakah gerakan valid (tidak menabrak dinding)
    if (gameMap.layout[newY][newX] != '#')
    {
        gameMap.layout[y][x] = ' '; // Kosongkan posisi lama

        // Jika posisi baru adalah titik, makan titiknya
        if (gameMap.layout[newY][newX] == '.')
        {
            // score ++; untuk penambahan logika skor nanti
        }

        // Update posisi baru
        x = newX;
        y = newY;

        gameMap.layout[y][x] = 'P'; // Update posisi Pac-Man
    }
}
