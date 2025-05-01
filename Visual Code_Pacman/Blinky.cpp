#include "Blinky.h"
#include "WanderState.h"

Blinky::Blinky(int x, int y) : StateGhost(x, y)
{
    setState(new WanderState()); // State Awal
}
