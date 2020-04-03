#ifndef Common_h
#define Common_h

#include <iostream>
#include <sstream>

void Print(const std::string& Message)
{
    std::cout << Message << "\n";
}

int ConvertToInt(const std::string& ToConvert)
{
    int Ret = 0;
    std::stringstream Converter;
    Converter << ToConvert;
    Converter >> Ret;
    return Ret;
}

bool VerifyIsDigit(const std::string& ToVerify)
{
    for( const char Elem : ToVerify )
    {
        if( !isdigit(Elem) ) {
            return false;
        }
    }
    return true;
}

#endif // Common_h
