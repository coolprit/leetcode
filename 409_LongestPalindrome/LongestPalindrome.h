#pragma once
#include "../Exercise.h"

class LongestPalindrome : public Exercise
{
public:
    int longestPalindrome(std::string s);
    void test() override;
    void processExample(std::string s);
};
