#include "RansomNote.h"

bool RansomNote::canConstruct(std::string ransomNote, std::string magazine)
{
    unsigned int array[27]{};
    for (unsigned int i = 0; i < magazine.size(); ++i) 
    {
        array[magazine[i]-96]++;
    }
    for (unsigned int i = 0; i < ransomNote.size(); ++i) 
    {
        if (array[ransomNote[i]-96] > 0) array[ransomNote[i]-96]--;
        else return false;
    }
    return true;
}

void RansomNote::test()
{
    std::cout << "383: Ransom Note" << difficultyToString(difficulty).value() <<"\n";
    processExample("a", "b");
    processExample("aa", "ab");
    processExample("aa", "aab");
    std::cout << "------------------" << "\n";
}

void RansomNote::processExample(std::string ransomNote, std::string magazine)
{
    std::cout << "String1: " << ransomNote << "\n";
    std::cout << "String2: " << magazine << "\n";
    std::cout << "Can String1 be constructed by using only letters from String2: " << canConstruct(ransomNote, magazine) << "\n";
}

