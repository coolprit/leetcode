#pragma once
#include "../../Exercise.h"

class RomanToInteger : public Exercise
{
    using Exercise::Exercise;
public:
    int romanToInt(std::string s);
    void test() override;
    void processExample(std::string s);
};
