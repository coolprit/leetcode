#include "CountingBits.h"

#include "../../Util.h"

std::vector<int> CountingBits::countBits(int n)
{
    std::vector<int> answer(n+1);
    for (int i = 1; i < n + 1; ++i)
    {
        answer[i] = answer[i >> 1] + (i & 1);
    }
    return answer;
}

std::vector<int> CountingBits::countBits2(int n)
{
    std::vector<int> answer(n+1);
    for (int i = 0; i < n + 1; ++i) 
    {
        int count = 0;
        int num = i;
        while(num > 0) 
        {
            if (num % 2 == 1) count++;
            num /= 2;
        }
        answer[i] = count;
    }
    return answer;
}

void CountingBits::test()
{
    std::cout << "338: Counting Bits" << difficultyToString(difficulty).value() <<"\n";
    processExample(2);
    processExample(5);
    std::cout << "------------------" << "\n";
}

void CountingBits::processExample(int n)
{
    std::cout << "Number: " << n << " \n";
    std::cout << "List of bits for every number to n: \n";
    auto bits = countBits(n);
    Util::printVector(bits);
}
