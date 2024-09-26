#pragma once
#include "../Exercise.h"

class TwoSum : Exercise
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    void test() override;
    void processExample(std::vector<int> values, int target);
};
