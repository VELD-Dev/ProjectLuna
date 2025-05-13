
#include <cstddef>
#include <cstring>
#include <format>
#include <iostream>
#include "common.h"
#include "rac1/boot.h"

int main(int argc, char* argv[])
{
    const auto args = common::strsplit(*argv, " ");
    printf("Ratchet Ported (v%s-%s) startup ! HELLO WORLD !!!", RCPORTED_VERSION, __DATE__);
    printf("Amount of args: %llu\n", args.size());

    // If no args or selected game is "1" then start Ratchet 2002.
    if (args.size() == 1 || std::strcmp(argv[1], "1") == 0)
    {
        return rac1::boot::main(argc, argv);
    }
    
    return 0;
}
