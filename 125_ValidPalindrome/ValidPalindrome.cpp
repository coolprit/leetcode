#include "ValidPalindrome.h"

bool ValidPalindrome::isPalindrome(std::string s)
{
    int left = 0, right = s.size()-1;
    while(left <= right) 
    {
        if(!isalnum(s[left])) ++left;
        else if(!isalnum(s[right])) --right;
        else if(tolower(s[left]) != tolower(s[right])) return false;
        else {
            ++left;
            --right;
        }
    }
    return true;
}

void ValidPalindrome::test()
{
    std::cout << "125: Valid Palindrome" << "\n";
    processExample("A man, a plan, a canal: Panama");
    processExample("race a car");
    processExample(" ");
    std::cout << "------------------" << "\n";
}

void ValidPalindrome::processExample(std::string s)
{
    std::cout << "String: " << s << "\n";
    std::cout << "Is palindrome: " << isPalindrome(s) << "\n";
}

