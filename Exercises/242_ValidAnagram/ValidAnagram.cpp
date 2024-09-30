#include "ValidAnagram.h"

bool ValidAnagram::isAnagram(std::string s, std::string t)
{
    std::vector<int> alphabetCount(26);
    if(s.size() != t.size()) return false;
    for(const char literal : s) ++alphabetCount[literal-'a'];
    for(const char literal : t) {
        int charValue = literal - 'a';
        if (alphabetCount[charValue] == 0) return false;
        --alphabetCount[charValue];
    }
    return true;
}

void ValidAnagram::test()
{
    std::cout << "242: Valid Anagram" << difficultyToString(difficulty).value() <<"\n";
    processExample("anagram", "nagaram");
    processExample("rat", "car");
    std::cout << "------------------" << "\n";
}

void ValidAnagram::processExample(std::string s, std::string t)
{
    std::cout << "String 1: " << s << "\n";
    std::cout << "String 2: " << t << "\n";
    std::cout << "Is anagram: " << isAnagram(s, t) << "\n";
}

