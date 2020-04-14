#ifndef Fibonacci_h
#define Fibonacci_h

#include "Common.h"

int Fibonacci()
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
    int PreviousNum = 0;
    int CurrentNum = 1;
    PrintLine("Printing out to the ",Input,GetDigitSuffix(Input)," Fibonacci number.");
    for( int Count = 0 ; Count < SourceNum ; ++Count )
    {
        int TempNum = CurrentNum + PreviousNum;
        PreviousNum = CurrentNum;
        CurrentNum = TempNum;
        if( Count != ( SourceNum - 1 ) ) {
            Print(CurrentNum,", ");
        }else{
            PrintLine("and ",CurrentNum,".");
        }
    }

    return EXIT_SUCCESS;
}

#endif
