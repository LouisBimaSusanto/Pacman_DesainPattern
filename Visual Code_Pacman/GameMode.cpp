#include "GameMode.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <chrono>
#include <thread>

#include "ChaseState.h"

// Ghost Thing
#include "GhostFactory.h"
#include "FrightenedState.h"
#include "ReturnToBaseState.h"
#include "SpeedBoostDecorator.h"

GameMode::GameMode() : pac(1, 1), isRunning(true)
{
    ghost = GhostFactory::createGhost(GhostType::BLINKY, 8, 8);
    gameMap.layout[pac.y][pac.x] = 'P';
}

GameMode::~GameMode()
{
    delete ghost; // Hapus memory biar tidak memory leak
}

void GameMode::handleInput()
{
    if (_kbhit())
    {
        char input = _getch();
        int dx = 0, dy = 0;

        switch (input)
        {
        case 'w':
        case 72:
            dy = -1;
            break;
        case 's':
        case 80:
            dy = 1;
            break;
        case 'a':
        case 75:
            dx = -1;
            break;
        case 'd':
        case 77:
            dx = 1;
            break;
        case 'q':
            isRunning = false;
            break;
        case 'c': // Ganti ke ChaseState
            ghost->setState(new ChaseState());
            break;

        case 'f': // Ganti ke FrightenedState
            ghost->setState(new FrightenedState());
            break;

        case 'r': // Ganti ke ReturnToBaseState
            ghost->setState(new ReturnToBaseState());
            break;

        case 'b':
            ghost = new SpeedBoostDecorator(ghost);
            break;

        default:
            break;
        }

        pac.move(dx, dy, gameMap);
    }
}

void GameMode::run()
{
    while (isRunning)
    {
        system("cls");
        gameMap.render();
        std::cout << "Gunakan WASD atau Arrow Keys untuk bergerak, tekan 'q' untuk keluar, r untuk return to base, c untuk chase state, f untuk firghetened state, dan b untuk speed decorator.\n";

        handleInput();

        ghost->move(pac, gameMap);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
