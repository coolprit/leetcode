#include "AddBinary.h"

std::string AddBinary::addBinary(std::string a, std::string b)
{
    int i = 0;
    int carry = 0;
    std::string result{};

    while(i < a.size() || i < b.size() || carry)
    {
        int ai = i < a.size() ? a[a.size() - i - 1] - '0' : 0;
        int bi = i < b.size() ? b[b.size() - i - 1] - '0' : 0;
        int tmp = ai + bi + carry;
        result += static_cast<char>(tmp % 2 + '0');
        carry = (tmp > 1) ? 1 : 0;
        ++i;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

void AddBinary::test()
{
    std::cout << "67: Add Binary" << difficultyToString(difficulty).value() <<"\n";
    processExample("11", "1");
    processExample("1010", "1011");
    std::cout << "------------------" << "\n";
}

void AddBinary::processExample(std::string a, std::string b)
{
    std::cout << "String a: " << a << "\n";
    std::cout << "String b: " << b << "\n";
    std::cout << "Result: " << addBinary(a, b) << "\n";
}


