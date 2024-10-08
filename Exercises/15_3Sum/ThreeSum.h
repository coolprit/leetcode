#pragma once
#include "../../Exercise.h"

class ThreeSum : public Exercise
{
    using Exercise::Exercise;
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums);
    void test() override;
    void processExample(std::vector<int>& nums);
};
