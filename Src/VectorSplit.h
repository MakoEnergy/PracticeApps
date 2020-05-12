#ifndef VectorSplit_h
#define VectorSplit_h

#include "common.h"

int VectorSplit()
{
    int Temp = 0;
    int SplitValue = 0;
    std::vector<int> SourceVector;
    PrintLine("Please provide 10 numbers.");
    for( int Index = 0 ; Index < 10 ; ++Index )
    {
        Print("#",Index + 1,": ");
        std::cin >> Temp;
        SourceVector.push_back(Temp);
    }
    Print("Please provide a value to split the previous values with: ");
    std::cin >> SplitValue;

    std::vector<int> ReturnVector;
    for( std::vector<int>::iterator CurrIt = SourceVector.begin() ; CurrIt != SourceVector.end() ;  )
    {
        if( *CurrIt > SplitValue ) {
            ReturnVector.push_back( *CurrIt );
            CurrIt = SourceVector.erase(CurrIt);
        }else{
            ++CurrIt;
        }
    }

    std::cout << '\n';
    PrintLine("Here are your two new vectors: ");
    for( int Index = 0 ; Index < SourceVector.size() ; ++Index )
    {
        if( Index != SourceVector.size() - 1 ) {
            Print( SourceVector[Index], ", " );
        }else{
            PrintLine( "and ", SourceVector[Index], "." );
        }
    }
    for( int Index = 0 ; Index < ReturnVector.size() ; ++Index )
    {
        if( Index != ReturnVector.size() - 1 ) {
            Print( ReturnVector[Index], ", " );
        }else{
            PrintLine( "and ", ReturnVector[Index], "." );
        }
    }
    return 0;
}

#endif // VectorSplit_h
