#pragma once
#include "../Exercise.h"

class RansomNote : public Exercise
{
public:
    bool canConstruct(std::string ransomNote, std::string magazine);
    void test() override;
    void processExample(std::string ransomNote, std::string magazine);
};
