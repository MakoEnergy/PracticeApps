#ifndef DoubleLetters_h
#define DoubleLetters_h

#include "Common.h"

int DoubleLetters()
{
    std::string Input;
    Print("Please provide a word.");
    std::cin >> Input;

    if( Input.size() < 2 ) {
        Print("Word is too short!");
        return EXIT_FAILURE;
    }

    int FoundCount = 0;
    for( unsigned int Index = 1 ; Index < Input.size() ; ++Index )
    {
        if( Input[Index - 1] == Input[Index] ) {
            std::stringstream Output;
            Output << "Found a duplicate of \"" << Input[Index - 1] << Input[Index] << "\" at indexes " << Index - 1 << " and " << Index;
            Print(Output.str());
            FoundCount++;
        }
    }

    if( FoundCount == 0 ) {
        Print("No duplicates were found!");
    }else{
        std::cout << "Found " << FoundCount << " results.\n";
    }

    return EXIT_SUCCESS;
}

#endif
