#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

class MajorityElement : public Exercise
{
    using Exercise::Exercise;
public:
    int majorityElement(std::vector<int>& nums);
    void test() override;
    void processExample(std::vector<int>& nums);
};
