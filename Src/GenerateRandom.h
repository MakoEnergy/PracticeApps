#ifndef GenerateRandom_h
#define GenerateRandom_h

#include "Common.h"

#include <random>

int GenerateRandom()
{
    std::random_device Random;
    std::mt19937 Generator(Random());
    std::uniform_int_distribution<> Distribution(1,100);

    int MaxNumbers = 0;
    PrintLine("Please provide a count of the random numbers to generate.");
    std::cin >> MaxNumbers;

    for( int Count = 0 ; Count < MaxNumbers ; ++Count )
    {
        std::cout << Distribution(Generator) << ' ';
    }

    return 0;
}

#endif // GenerateRandom_h
