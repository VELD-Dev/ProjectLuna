#include "boot.h"
#include "../ProjectLuna/common.h"

#include <cstdio>

int main(int argc, char* argv[])
{
    current_level = VELDIN_INTRO;

    DBG("Loading Ratchet & Clank (2002)...\n");
    DBG("Current level: %d", current_level);

    // Startup
    
    // Init game graphics

    // Check saves

    bool shouldClose = false;

    long long int frameCount = 0;

    // Game loop
    while (!shouldClose)
    {
        _sleep(1);
        frameCount++;

        if (frameCount > 1000)
            shouldClose = true;
    }
    
    return 0;
}

void start()
{
    
}