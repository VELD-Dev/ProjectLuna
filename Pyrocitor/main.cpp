
#include <cstddef>
#include <cstring>
#include <format>
#include <iostream>
#include "common.h"

int main(int argc, char* argv[])
{
    printf("Project Luna (v%s-%s) startup ! HELLO WORLD !!!\n", RCPORTED_VERSION, __DATE__);
    printf("Amount of args: %d\n", argc - 1);

    // If no args or selected game is "1" then start Ratchet 2002.
    if (argc == 1 || std::strcmp(argv[1], "1") == 0)
    {
        // Start Ratchet 1
    }
    
    return 0;
}
