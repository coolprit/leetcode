#pragma once
#include "../../Exercise.h"

class ValidPalindrome : public Exercise
{
    using Exercise::Exercise;
public:
    bool isPalindrome(std::string s);
    void test() override;
    void processExample(std::string s);
};
