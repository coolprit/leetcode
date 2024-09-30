#include "LongestPalindrome.h"

int LongestPalindrome::longestPalindrome(std::string s)
{
    std::unordered_map<char, int> map;
    for (char& ch : s) map[ch]++;

    bool odd = false;
    int length = 0;

    for(auto& elem : map) 
    {
        if (elem.second % 2 == 0) length += elem.second;
        else {
            length += elem.second - 1;
            odd = true;
        }
    }
    return (!odd) ? length : ++length;
}

void LongestPalindrome::test()
{
    std::cout << "409: Longest Palindrome" << difficultyToString(difficulty).value() <<"\n";
    processExample("abccccdd");
    processExample("a");
    std::cout << "------------------" << "\n";
}

void LongestPalindrome::processExample(std::string s)
{
    std::cout << "String: " << s << "\n";
    std::cout << "The longest palindrome that can be built from the string is " << longestPalindrome(s) << " letters long.\n";
}

