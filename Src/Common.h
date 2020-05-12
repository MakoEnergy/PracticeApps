#ifndef Common_h
#define Common_h

#include <iostream>
#include <sstream>

template<typename... PrintTypes>
void Print(PrintTypes&&... Messages)
{
    ( ( std::cout << Messages ), ... );
}

template<typename... PrintTypes>
void PrintLine(PrintTypes&&... Messages)
{
    ( ( std::cout << Messages ), ... );
    std::cout << '\n';
}

template<typename ReturnType>
ReturnType ConvertTo(const std::string& ToConvert)
{
    ReturnType Ret = 0;
    std::stringstream Converter;
    Converter << ToConvert;
    Converter >> Ret;
    return Ret;
}

bool VerifyIsIntDigit(const std::string& ToVerify)
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

bool VerifyIsFloatDigit(const std::string& ToVerify)
{
    if( ToVerify.empty() ) {
        return false;
    }
    bool DecimalDetected = 0;
    for( const char Elem : ToVerify )
    {
        if( ( Elem == '.' && !DecimalDetected ) || !isdigit(Elem) ) {
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
