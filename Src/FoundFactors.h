#ifndef FoundFactors_h
#define FoundFactors_h

#include <cctype>
#include <vector>

#include "Common.h"

std::vector<int> FoundFactors_Find(int ToFactor)
{
    std::vector<int> Ret;
    for( int X = 1 ; X <= ToFactor ; ++X )
    {
        if( ToFactor % X == 0 ) {
            Ret.push_back(X);
        }
    }
    return Ret;
}

int FoundFactors()
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
    std::vector<int> FoundFactors = FoundFactors_Find(SourceNum);

    PrintLine("The found factors for your provided number are: ");
    using IntIter = std::vector<int>::iterator;
    for( IntIter CurrIt = FoundFactors.begin() ; CurrIt != FoundFactors.end() ; ++CurrIt )
    {
        if( CurrIt != std::prev( FoundFactors.end() ) ) {
            Print(*CurrIt,", ");
        }else{
            PrintLine("and ",*CurrIt,".");
        }
    }

    return EXIT_SUCCESS;
}

#endif // FoundFactors_h
