#include "Pinky.h"
#include "WanderState.h"

Pinky::Pinky(int x, int y) : StateGhost(x, y)
{
    setState(new WanderState());
}
