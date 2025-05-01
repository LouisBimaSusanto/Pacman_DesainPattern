#ifndef GAMEMODE_H
#define GAMEMODE_H

#include "Pacman.h"
#include "Map.h"
#include "Ghost.h"
#include "StateGhost.h"

class GameMode
{
private:
    bool isRunning;
    Pacman pac;
    Map gameMap;
    StateGhost *ghost;

public:
    GameMode();
    ~GameMode();
    void run();
    void handleInput();
};

#endif
