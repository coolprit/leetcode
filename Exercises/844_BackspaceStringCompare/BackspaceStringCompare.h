#pragma once
#include "../../Exercise.h"

class BackspaceStringCompare : public Exercise
{
    using Exercise::Exercise;
public:
    std::string removeBackspace(std::string s);
    bool backspaceCompare(std::string a, std::string b);
    void test() override;
    void processExample(std::string a, std::string b);
};
