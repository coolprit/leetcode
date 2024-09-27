#pragma once
#include "../Exercise.h"

class BestTimeToBuyAndSellStock : public Exercise
{
public:
    int maxProfit(std::vector<int>& prices);
    void test() override;
    void processExample(std::vector<int>& prices);
};
