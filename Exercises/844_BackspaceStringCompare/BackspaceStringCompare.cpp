#include "BackspaceStringCompare.h"

bool BackspaceStringCompare::backspaceCompare(std::string a, std::string b)
{
    std::string cleanA = removeBackspace(a);
    std::string cleanB = removeBackspace(b);
    if (cleanA.size() != cleanB.size()) return false;

    for (int i = 0; i < cleanA.size(); ++i) 
    {
        if (cleanA[i] != cleanB[i]) return false;
    }
    return true;
}

std::string BackspaceStringCompare::removeBackspace(std::string s)
{
    std::string tmp{};
    unsigned int backspaceCount{0};
    for (int i = s.size()-1; i >= 0; --i) {
        if(s[i] == '#') 
        {
            backspaceCount++;
        }
        else if (backspaceCount > 0) backspaceCount--;
        else tmp += s[i];
    }
    return tmp;
}

void BackspaceStringCompare::test()
{
    std::cout << "844: Backspace String Compare" << difficultyToString(difficulty).value() <<"\n";
    processExample("ab#c", "ad#c");
    processExample("ab##", "c#d#");
    processExample("a#c", "b");
    std::cout << "------------------" << "\n";
}

void BackspaceStringCompare::processExample(std::string a, std::string b)
{
    std::cout << "String A: " << a << " \n";
    std::cout << "String B: " << b << " \n";
    std::cout << "Are strings the same after cleaning: " << backspaceCompare(a, b) << "\n";
}



