#ifndef DoubleLetters_h
#define DoubleLetters_h

#include "Common.h"

int DoubleLetters()
{
    std::string Input;
    PrintLine("Please provide a word.");
    std::cin >> Input;

    if( Input.size() < 2 ) {
        PrintLine("Word is too short!");
        return EXIT_FAILURE;
    }

    int FoundCount = 0;
    for( unsigned int Index = 1 ; Index < Input.size() ; ++Index )
    {
        if( Input[Index - 1] == Input[Index] ) {
            PrintLine("Found a duplicate of \"",Input[Index - 1],Input[Index],"\" at indexes ",(Index - 1)," and ",Index);
            FoundCount++;
        }
    }

    if( FoundCount == 0 ) {
        PrintLine("No duplicates were found!");
    }else{
        PrintLine("Found ",FoundCount," results.");
    }

    return EXIT_SUCCESS;
}

#endif
