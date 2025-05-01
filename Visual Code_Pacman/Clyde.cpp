#include "Clyde.h"
#include "WanderState.h"

Clyde::Clyde(int x, int y) : StateGhost(x, y)
{
    setState(new WanderState());
}
