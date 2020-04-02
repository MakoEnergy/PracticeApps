#ifndef FoundFactors_h
#define FoundFactors_h

#include <cctype>
#include <vector>
#include <sstream>

#include "Common.h"

bool FoundFactors_VerifyDigit(const std::string& ToVerify)
{
    for( const char Elem : ToVerify )
    {
        if( !isdigit(Elem) ) {
            return false;
        }
    }
    return true;
}

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

    Print("Please provide a number.");
    std::getline(std::cin,Input);
    if( !FoundFactors_VerifyDigit(Input) ) {
        Print("Input provided was not a digit!");
        return EXIT_FAILURE;
    }

    std::stringstream Converter;
    Converter << Input;
    Converter >> SourceNum;

    std::vector<int> FoundFactors = FoundFactors_Find(SourceNum);

    Print("The found factors for your provided number are: ");
    using IntIter = std::vector<int>::iterator;
    for( IntIter CurrIt = FoundFactors.begin() ; CurrIt != FoundFactors.end() ; ++CurrIt )
    {
        if( CurrIt != std::prev( FoundFactors.end() ) ) {
            std::cout << *CurrIt << ", ";
        }else{
            std::cout << "and " << *CurrIt << ".\n";
        }
    }

    return EXIT_SUCCESS;
}

#endif // FoundFactors_h
