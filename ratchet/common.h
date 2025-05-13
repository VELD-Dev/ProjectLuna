#pragma once

#include <string>
#include <vector>
#include <iostream>

#ifndef COMMON_INCLUDE_FILE
#define COMMON_INCLUDE_FILE

#define RCPORTED_VERSION "0.0.1"

#endif

#if _DEBUG
#define DBG(fmt, ...) printf(fmt, __VA_ARGS__)
#else
#define DBG(fmt, ...)
#endif

class common
{
public:
    static std::vector<std::string> strsplit(std::string const &input, std::string const &delim)
    {
        std::string s = input;
        std::vector<std::string> results;
        size_t pos;
        while ((pos = s.find(delim)) != std::string::npos)
        {
            std::string token = s.substr(0, pos);
            results.push_back(token);
            s.erase(0, pos + delim.length());
        }

        return results;
    }
};
