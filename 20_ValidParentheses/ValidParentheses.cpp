#include "ValidParentheses.h"

bool ValidParentheses::isValid(std::string s) {
    std::stack<char> stack;
    for (unsigned int i = 0; i < s.size(); ++i) 
    {
        char tmp = s[i];
        if(stack.empty()) stack.push(tmp);
        else {
            char topValue = stack.top();
            if ((tmp == '}' && topValue == '{') || (tmp == ')' && topValue == '(') || (tmp == ']' && topValue == '[')) 
            {
                stack.pop();
            }
            else if (tmp == '(' || tmp == '{' || tmp == '[') 
            {
                stack.push(tmp);
            }
            else {
                return false;
            }
        }
    }
    if (stack.empty()) return true;
    return false;
}

void ValidParentheses::test()
{
    std::cout << "20: Valid Parentheses" << "\n";
    processExample("()");
    processExample("()[]{}");
    processExample("(]");
    processExample("([])");
    std::cout << "------------------" << "\n";
}

void ValidParentheses::processExample(std::string s)
{
    std::cout << "String to check: " << s << "\n";
    std::cout << "Output: " << isValid(s) << "\n";
}


