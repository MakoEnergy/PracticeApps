#ifndef WordCount_h
#define WordCount_h

#include "Common.h"

int WordCount()
{
    std::string Input;

    PrintLine("Please provide a string/sentence.");
    std::getline(std::cin,Input);

    int Count = 0;
    size_t Pos = 0;
    size_t LastFoundPos = 0;
    for( Pos = Input.find(' ') ; Pos != std::string::npos ; Pos = Input.find(' ',++LastFoundPos) )
    {
        if( LastFoundPos < Pos ) {
            LastFoundPos = Pos;
            ++Count;
        }
    }
    if( LastFoundPos < Pos ) {
        ++Count;
    }

    PrintLine("Found ",Count," words.");

    return EXIT_SUCCESS;
}

#endif
