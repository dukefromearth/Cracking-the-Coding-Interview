#include <iostream>
using namespace std;

bool isStringPermutation(string s1, string s2)
{
    if ((s1.size() != s2.size()))
        return false;

    int s1CharCount[256] = {};
    for (int i = 0; i < s1.size(); i++)
    {
        char c = s1[i];
        s1CharCount[c]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        char c = s2[i];
        if (s1CharCount[c] <= 0)
            return false;
        else
            s1CharCount[c]--;
    }
    return true;
}

int main()
{
    string s1 = "asd";
    string s2 = "sas";
    cout << isStringPermutation(s1, s2);
}