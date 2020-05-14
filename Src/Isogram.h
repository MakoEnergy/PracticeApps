#ifndef Isogram_h
#define Isogram_h

#include "Common.h"

#include <set>

int Isogram()
{
    std::string InputString;
    PrintLine("Please provide a word.");
    std::cin >> InputString;

    std::set<char> UniqueChecker;

    for( const char CurrChar : InputString )
    {
        std::pair< std::set<char>::iterator, bool > FoundPair = UniqueChecker.insert( ::tolower(CurrChar) );
        if( !FoundPair.second ) {
            PrintLine("The word \"",InputString,"\" is NOT an isogram.");
            return 1;
        }
    }
    PrintLine("The word \"",InputString,"\" is an isogram.");
    return 0;
}

#endif // Isogram_h
