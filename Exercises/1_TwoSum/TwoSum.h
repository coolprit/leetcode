#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

class TwoSum : public Exercise
{
    using Exercise::Exercise;
public:
    //TwoSum(Difficulty diff) : Exercise(diff){}
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    void test() override;
    void processExample(std::vector<int> values, int target);
};
