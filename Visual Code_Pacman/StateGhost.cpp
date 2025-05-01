#include "StateGhost.h"
#include <iostream>

StateGhost::StateGhost(int x, int y) : Ghost(x, y), state(nullptr) {}

StateGhost::~StateGhost()
{
    delete state;
}

void StateGhost::setState(GhostState *newState)
{
    if (state)
        delete state;
    state = newState;
}

void StateGhost::move(Pacman &pac, Map &gameMap)
{
    if (state)
    {
        state->move(this, pac, gameMap);
    }
    else
    {
        std::cout << "Ghost has no state!\n";
    }
}

void StateGhost::setPosition(int newX, int newY)
{
    x = newX;
    y = newY;
}
