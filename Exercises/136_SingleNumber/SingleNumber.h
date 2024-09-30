#pragma once
#include "../../Exercise.h"

class SingleNumber : public Exercise
{
    using Exercise::Exercise;
public:
    int singleNumber(std::vector<int>& nums);
    void test() override;
    void processExample(std::vector<int>& nums);
};
