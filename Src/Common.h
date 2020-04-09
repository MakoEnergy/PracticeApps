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
    if( ToVerify.empty() ) {
        return false;
    }
    for( const char Elem : ToVerify )
    {
        if( !isdigit(Elem) ) {
            return false;
        }
    }
    return true;
}

std::string GetDigitSuffix(const std::string& ToSuffix)
{
    std::string Ret;
    if( !ToSuffix.empty() ) {
        if( ToSuffix.back() == '1' ) {
            Ret.append("st");
        }else if( ToSuffix.back() == '2' ) {
            Ret.append("nd");
        }else if( ToSuffix.back() == '3' ) {
            Ret.append("rd");
        }else{
            Ret.append("th");
        }
    }
    return Ret;
}

#endif // Common_h
