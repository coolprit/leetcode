#pragma once
#include "../Exercise.h"

class ValidAnagram : public Exercise
{
public:
    bool isAnagram(std::string s, std::string t);
    void test() override;
    void processExample(std::string s, std::string t);
};
