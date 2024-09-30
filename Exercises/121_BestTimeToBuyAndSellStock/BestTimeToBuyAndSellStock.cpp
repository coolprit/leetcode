#include "BestTimeToBuyAndSellStock.h"

int BestTimeToBuyAndSellStock::maxProfit(std::vector<int>& prices)
{
    int price = prices[0];
    int profit = 0;
    for(unsigned int i = 1; i < prices.size(); ++i) 
    {
        if (prices[i] < price) price = prices[i];
        else if(prices[i] - price > profit) profit = prices[i] - price;
    } 
    return profit;
}

void BestTimeToBuyAndSellStock::test()
{
    std::cout << "121: Best Time To Buy And Sell Stock" << difficultyToString(difficulty).value() <<"\n";
    std::vector<int> prices{7, 1, 5, 3, 6, 4};
    processExample(prices);
    prices = {7, 6, 4, 3, 1};
    processExample(prices);
    std::cout << "------------------" << "\n";
}

void BestTimeToBuyAndSellStock::processExample(std::vector<int>& prices)
{
    std::cout << "Prices: " << "\n";
    Util::printVector(prices);
    std::cout << "Maximum profit: " << maxProfit(prices) << "\n";
}
