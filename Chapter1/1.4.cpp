#include <iostream>
#include <unordered_map>
using namespace std;

bool isPalindromePermutation(string s)
{
    unordered_map<char, int> myMap;
    for (int i = 0; i < s.size(); i++)
    {
        char c = tolower(s[i]);
        if (c != ' ')
        {
            if (myMap[c] > 0)
            {
                myMap.erase(c);
            }
            else
                myMap[c] = 1;
        }
    }
    if (myMap.size() == 1 || myMap.size() == 0)
        return true;
    return false;
}

int main()
{
    string input = "Tact Coa";
    cout << isPalindromePermutation(input);
}