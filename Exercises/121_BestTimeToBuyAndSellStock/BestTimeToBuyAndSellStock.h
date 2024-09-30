#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

class BestTimeToBuyAndSellStock : public Exercise
{
    using Exercise::Exercise;
public:
    int maxProfit(std::vector<int>& prices);
    void test() override;
    void processExample(std::vector<int>& prices);
};
