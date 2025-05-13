#pragma once

namespace rac1
{
    extern int current_level;

    constexpr int VELDIN_INTRO = -1;
    constexpr int VELDIN_START = 0;
    constexpr int NOVALIS = 1;
    
    class RAC1 boot final
    {
    public:
        static int main(int argc, char* argv[]);
    };
}
