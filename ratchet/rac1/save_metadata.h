#pragma once
#include <cstddef>
#define byte std::byte

struct save_metadata
{
    int** unk0;
    char* str0;
    char* str1;
    char* str2;
    char* str3;
    int** unk1;
    char* str4;
    char* str5;

    byte unkArray[0x40F];
    char* str6;
};
