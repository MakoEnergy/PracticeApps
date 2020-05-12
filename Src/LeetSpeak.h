#ifndef LeetSpeak_h
#define LeetSpeak_h

#include "Common.h"

#include <map>

int LeetSpeak()
{
    std::string InputString;
    PrintLine("Please provide a String to convert to LeetSpeak.");
    std::getline(std::cin,InputString);

    std::map<char,char> Translator = { {'a','4'}, {'e','3'}, {'g','6'}, {'i','1'}, {'o','0'}, {'s','5'}, {'t','7'},
                                       {'A','4'}, {'E','3'}, {'G','6'}, {'I','1'}, {'O','0'}, {'S','5'}, {'T','7'} };

    PrintLine("Here is your converted String: ");
    for( const char CurrChar : InputString )
    {
        std::map<char,char>::iterator CharIt = Translator.find(CurrChar);
        if( CharIt != Translator.end() ) {
            std::cout << (*CharIt).second;
        }else{
            std::cout << CurrChar;
        }
    }

    return 0;
}

#endif // LeetSpeak_h
