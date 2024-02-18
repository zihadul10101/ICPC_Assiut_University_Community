#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        int min, max;
        if (a >= b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }
        for (int i = min+1; i <= max-1; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}