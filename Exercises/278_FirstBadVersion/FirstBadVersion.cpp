#include "FirstBadVersion.h"

void FirstBadVersion::test()
{
    std::cout << "278: First Bad Version" << difficultyToString(difficulty).value() <<"\n";
    processExample(5, 4);
    processExample(1, 1);
    std::cout << "------------------" << "\n";
}

int FirstBadVersion::firstBadVersion(int n)
{
    int left = 1;
    int right = n;
    while(left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (isBadVersion(mid)) right = mid - 1;
        else left = mid + 1;
                
    }
    return left;
}

void FirstBadVersion::processExample(int n, int bad)
{
    std::cout << "Number of versions: " << n << "\n";
    std::cout <<  "Bad version: " << bad << "\n";
    this->badVersionFrom = bad;
    std::cout << "Found first bad version: " << firstBadVersion(n) << "\n";
}

bool FirstBadVersion::isBadVersion(int ver)
{
    return ver >= badVersionFrom;
}


