#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;


string longestCommonPrefix(vector<string>& strs)
{
    string comm = "";
    int min_len = INT_MAX;

    for (string s: strs)
    {
        if (s.length() < min_len)
        {
            min_len = s.length();
        }
    }

    int i = 0;
    bool still_same = true;

    while ( still_same && i < min_len)
    {
        char c = strs[0][i];
        for (int n = 1; n < strs.size(); n++)
        {
            if (strs[n][0] !=c)
            {
                still_same = false;
            }
        }
    }
}

int main()
{
    std::vector<string> strs = {"flower","flow","flight"};

    longestCommonPrefix( strs);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}