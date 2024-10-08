#include "RomanToInteger.h"

int RomanToInteger::romanToInt(std::string s)
{
    int value{0};
    for (int i = s.size() - 1; i >= 0; --i) 
    {
        switch(s[i]) {
        case 'I': {
                if ((i+1) < s.size() && (s[i+1] == 'V' || s[i+1] == 'X')) 
                {
                    value--;
                } else value++;
        }
            break;
        case 'V': 
            value += 5;
            break;
        case 'X': {
                if ((i+1) < s.size() && (s[i+1] == 'L' || s[i+1] == 'C')) 
                {
                    value -= 10;
                } else value += 10;
        }
            break;
        case 'L':
            value += 50;
            break;
        case 'C': {
                if ((i+1) < s.size() && (s[i+1] == 'D' || s[i+1] == 'M')) 
                {
                    value -= 100;
                } else value += 100;
        }
            break;
        case 'D':
            value += 500;
            break;
        case 'M':
            value += 1000;
            break;
        }
    }
    return value;
}

void RomanToInteger::test()
{
    std::cout << "13: Roman To Integer" << difficultyToString(difficulty).value() <<"\n";
    processExample("III");
    processExample("LVIII");
    processExample("MCMXCIV");
    std::cout << "------------------" << "\n";
}

void RomanToInteger::processExample(std::string s)
{
    std::cout << "String: "<< s << "\n";
    std::cout << "Value: " << romanToInt(s) << "\n";
}

