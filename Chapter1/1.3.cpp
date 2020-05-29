#include <iostream>
using namespace std;

string URLify(string url, int realSize)
{
    for (int i = 0; i < realSize; i++)
    {
        if (url[i] == ' ')
        {
            url = url.substr(0, i) + "%20" + url.substr(i + 1, url.size());
            i += 2;
        }
    }
    return url;
}

int main()
{
    string s = "Mr John Smith    ";
    cout << URLify(s, 13);
}