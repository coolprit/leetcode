#pragma once
#include "../Exercise.h"

class ValidPalindrome : public Exercise
{
public:
    bool isPalindrome(std::string s);
    void test() override;
    void processExample(std::string s);
};
