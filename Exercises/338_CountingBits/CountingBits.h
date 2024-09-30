#pragma once
#include "../../Exercise.h"

class CountingBits : public Exercise
{
    using Exercise::Exercise;
public:
    std::vector<int> countBits(int n);
    std::vector<int> countBits2(int n);
    void test() override;
    void processExample(int n);
};
