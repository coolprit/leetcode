#pragma once
#include "../Exercise.h"

class MajorityElement : public Exercise
{
public:
    int majorityElement(std::vector<int>& nums);
    void test() override;
    void processExample(std::vector<int>& nums);
};
