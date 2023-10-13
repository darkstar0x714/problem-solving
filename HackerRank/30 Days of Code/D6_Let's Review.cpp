#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numberOfWords;

    std::cin >> numberOfWords;

    for (int i = 0; i < numberOfWords; i++)
    {
        std::string s, even = "", odd = "";
        int strLen;
        std::cin >> s;
        strLen = s.length();
        for (int i = 0; i < strLen; i++)
        {
            if (i % 2 == 0)
            {
                even = even + s[i];
            }
            else
            {
                odd = odd + s[i];
            }
        }
        std::cout << even << " " << odd << std::endl;
    }

    return 0;
}
