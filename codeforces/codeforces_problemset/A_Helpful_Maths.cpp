// C++ program to sort a string of characters
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, empty = "";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            empty += s[i];
        }
    }
    sort(empty.begin(), empty.end());
    cout << empty[0];
    for (int i = 1; i < empty.size(); i++)
    {
        cout << "+" << empty[i];
    }
    cout << endl;
    return 0;
}
