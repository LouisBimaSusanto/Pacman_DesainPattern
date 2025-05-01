// map.cpp
#include "Map.h"
#include <iostream>
#include <cstring> // Include for memcpy

Map::Map()
{
    // Ensure each row has exactly 10 characters (matching WIDTH)
    char tempLayout[HEIGHT][WIDTH] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
        {'#', '.', '#', '#', '#', '#', '#', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
        {'#', '.', '#', '#', '#', '#', '#', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
        {'#', '.', '#', '#', '#', '#', '#', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}};

    std::copy(&tempLayout[0][0], &tempLayout[0][0] + WIDTH * HEIGHT, &layout[0][0]);
}

void Map::render()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            std::cout << layout[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
