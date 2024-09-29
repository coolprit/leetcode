#include "ClimbingStairs.h"

int ClimbingStairs::climbStairs(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    }
    int prev = 1, curr = 1;
    for (int i = 2; i <= n; i++) {
        int tmp = curr;
        curr = prev + curr;
        prev = tmp;
    }
    return curr;
}

void ClimbingStairs::test()
{
    std::cout << "21: Merge Two Sorted Lists" << "\n";
    processExample(2);
    processExample(3);
    processExample(10);
    processExample(8);
    std::cout << "------------------" << "\n";
}

void ClimbingStairs::processExample(int n)
{
    std::cout << "Number of steps to reach the top: " << n << "\n";
    std::cout << "Number of possible ways to reach the top: " << climbStairs(n) << "\n";
}


