#ifndef AddUp_h
#define AddUp_h

#include "Common.h"

int AddUp()
{
    int SourceNum = 0;
    std::string Input;

    Print("Please provide a number.");
    std::getline(std::cin,Input);
    if( !VerifyIsIntDigit(Input) ) {
        Print("Input provided was not a digit!");
        return EXIT_FAILURE;
    }

    SourceNum = ConvertToInt(Input);
    int Total = 0;
    for( int X = 1 ; X <= SourceNum ; ++X )
    {
        Total += X;
    }
    std::cout << "The total value of every value from 1 to your number is: ";
    std::cout << Total << "!\n";
    return EXIT_SUCCESS;
}

#endif
