#pragma once
#include "../../Exercise.h"

class LongestSubstringWithoutRepeatingCharacters : public Exercise
{
    using Exercise::Exercise;
public:
    int lengthOfLongestSubstring(std::string s);
    void test() override;
    void processExample(std::string s);
};
