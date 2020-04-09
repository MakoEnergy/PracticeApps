#ifndef Fibonacci_h
#define Fibonacci_h

#include "Common.h"

int Fibonacci()
{
    int SourceNum = 0;
    std::string Input;

    Print("Please provide a number.");
    std::getline(std::cin,Input);
    if( !VerifyIsDigit(Input) ) {
        Print("Input provided was not a digit!");
        return EXIT_FAILURE;
    }

    SourceNum = ConvertToInt(Input);
    int PreviousNum = 0;
    int CurrentNum = 1;
    Print("Printing out to the " + Input + GetDigitSuffix(Input) + " Fibonacci number.");
    for( int Count = 0 ; Count < SourceNum ; ++Count )
    {
        int TempNum = CurrentNum + PreviousNum;
        PreviousNum = CurrentNum;
        CurrentNum = TempNum;
        if( Count != ( SourceNum - 1 ) ) {
            std::cout << CurrentNum << ", ";
        }else{
            std::cout << "and " << CurrentNum << ".\n";
        }
    }

    return EXIT_SUCCESS;
}

#endif
