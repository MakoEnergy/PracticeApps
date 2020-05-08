#ifndef TemperatureCoverter_h
#define TemperatureCoverter_h

#include "Common.h"

float ConvertCelsiusToKelvin(const float ToConvert)
{
    return ( ToConvert + 273.15f );
}

float ConvertCelsiusToFahrenheit(const float ToConvert)
{
    return ( ( ToConvert * ( 9.0f / 5.0f ) ) + 32.0f );
}

float ConvertKelvinToCelsius(const float ToConvert)
{
    return ( ToConvert - 273.15f );
}

float ConvertKelvinToFahrenheit(const float ToConvert)
{
    return ( ConvertCelsiusToFahrenheit( ToConvert - 273.15f ) );
}

float ConvertFahrenheitToCelsius(const float ToConvert)
{
    return ( ( ToConvert - 32.0f ) * ( 5.0f / 9.0f ) );
}

float ConvertFahrenheitToKelvin(const float ToConvert)
{
    return ( ConvertFahrenheitToCelsius(ToConvert) + 273.15f );
}

int TemperatureCoverter()
{
    std::string Input;
    PrintLine("Please provide a temperature to convert.");
    std::getline(std::cin,Input);

    if( Input.empty() ) {
        Print("Invalid input.");
        return 1;
    }

    size_t LetterIndex = 0;
    while( LetterIndex < Input.size() && !::isalpha( Input[LetterIndex] ) )
        { ++LetterIndex; }

    std::string TempNumbers = Input.substr(0,LetterIndex);
    std::cout << std::endl;
    if( ::tolower( Input[LetterIndex] ) == 'c' ) { // We were given a Celsius temp
        PrintLine("Your temperature in Fahrenheit: ",ConvertCelsiusToFahrenheit( ConvertTo<float>(TempNumbers) ),".");
        PrintLine("Your temperature in Kelvin: ",ConvertCelsiusToKelvin( ConvertTo<float>(TempNumbers) ),".");
    }else if( ::tolower( Input[LetterIndex] ) == 'f' ) { // We were given a Fahrenheit temp
        PrintLine("Your temperature in Celsius: ",ConvertFahrenheitToCelsius( ConvertTo<float>(TempNumbers) ),".");
        PrintLine("Your temperature in Kelvin: ",ConvertFahrenheitToKelvin( ConvertTo<float>(TempNumbers) ),".");
    }else if( ::tolower( Input[LetterIndex] ) == 'k' ) { // We were given a Kelvin temp
        PrintLine("Your temperature in Celsius: ",ConvertKelvinToCelsius( ConvertTo<float>(TempNumbers) ),".");
        PrintLine("Your temperature in Fahrenheit: ",ConvertKelvinToFahrenheit( ConvertTo<float>(TempNumbers) ),".");
    }else{
        Print("Unknown temp scale specified.");
        return 1;
    }

    return 0;
}

#endif // TemperatureCoverter_h
