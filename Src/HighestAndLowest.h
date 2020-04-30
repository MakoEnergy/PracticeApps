#ifndef HighestAndLowest_h
#define HighestAndLowest_h

#include "Common.h"

int HighestAndLowest()
{
    int Inputs[6] = {};

    PrintLine("Please provide 6 numbers.");
    for( int Index = 0 ; Index < 6 ; ++Index )
    {
        Print("#",Index + 1,": ");
        std::cin >> Inputs[Index];
    }

    int Lowest = std::numeric_limits<int>::max();
    int Highest = std::numeric_limits<int>::min();
    for( int Index = 0 ; Index < 6 ; ++Index )
    {
        if( Inputs[Index] < Lowest ) {
            Lowest = Inputs[Index];
        }
        if( Inputs[Index] > Highest ) {
            Highest = Inputs[Index];
        }
    }

    PrintLine("The Lowest number provided is: ",Lowest,".");
    PrintLine("The Highest number provided is: ",Highest,".");

    return EXIT_SUCCESS;
}

#endif // HighestAndLowest_h
