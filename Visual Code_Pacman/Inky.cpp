#include "Inky.h"
#include "WanderState.h"

Inky::Inky(int x, int y) : StateGhost(x, y)
{
    setState(new WanderState());
}
