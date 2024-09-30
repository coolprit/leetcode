#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

class ContainsDuplicate : public Exercise
{
    using Exercise::Exercise;
public:
    bool containsDuplicate(std::vector<int>& nums);
    void test() override;
    void processExample(std::vector<int>& nums);
};
