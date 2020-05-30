#include <iostream>
#include <unordered_map>

using namespace std;

string stringCompression(string s)
{
    if (s.size() < 1)
        return s;
    string returnString = "";
    int counter = 1;
    for (int i = 0; i < s.size() - 1; i++)
    {
        char currentChar = s[i];
        char nextChar = s[i + 1];
        if (currentChar == nextChar)
        {
            counter++;
        }
        else
        {
            returnString += currentChar + to_string(counter);
            counter = 1;
        }
    }
    returnString += s[s.size() - 1] + to_string(counter);
    return returnString;
}

int main()
{
    string input = "aabbbcccaaa";
    cout << stringCompression(input);
}
