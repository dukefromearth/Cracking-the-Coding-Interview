#include <iostream>
using namespace std;

bool isUniqueChars(string s)
{
    bool isUnique[256] = {};

    if (s.size() > 256)
        return false;

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (!isUnique[c])
            isUnique[c] = true;
        else
            return false;
    }

    return true;
}

int main()
{
    string s = "asdlfkj";
    cout << isUniqueChars(s);
    return 0;
}