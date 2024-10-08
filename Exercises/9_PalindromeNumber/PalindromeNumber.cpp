#include "PalindromeNumber.h"

bool PalindromeNumber::isPalindrome(int x)
{
    std::vector<int> numbers;
    if (x < 0) return false;
    while(x != 0) {
        numbers.push_back(x%10);
        x /= 10;
    }
    for (size_t i = 0, j = numbers.size()-1; i < numbers.size(); ++i, --j) 
    {
        if (numbers[i] != numbers[j]) return false;
    }
    return true;
}

void PalindromeNumber::test()
{
    std::cout << "9: Palindrome Number" << difficultyToString(difficulty).value() <<"\n";
    processExample(121);
    processExample(-121);
    processExample(10);
    std::cout << "------------------" << "\n";
}

void PalindromeNumber::processExample(int x)
{
    std::cout << "Number to process: " << x << "\n";
    std::cout << "Is palindrome: " << isPalindrome(x) << "\n";
}


