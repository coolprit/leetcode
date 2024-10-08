#pragma once
#include "../../Exercise.h"

class PalindromeNumber : public Exercise
{
    using Exercise::Exercise;
public:
    bool isPalindrome(int x);
    void processExample(int x);
    void test() override;
};
