#ifndef AddUp_h
#define AddUp_h

#include "Common.h"

int AddUp()
{
    int SourceNum = 0;
    std::string Input;

    PrintLine("Please provide a number.");
    std::getline(std::cin,Input);
    if( !VerifyIsIntDigit(Input) ) {
        PrintLine("Input provided was not a digit!");
        return EXIT_FAILURE;
    }

    SourceNum = ConvertTo<int>(Input);
    int Total = 0;
    for( int X = 1 ; X <= SourceNum ; ++X )
    {
        Total += X;
    }
    PrintLine("The total value of every value from 1 to your number is: ",Total,"!");
    return EXIT_SUCCESS;
}

#endif
