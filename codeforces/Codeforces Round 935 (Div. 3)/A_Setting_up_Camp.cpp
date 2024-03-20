#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int a, b, c, sum, mod;
        cin >> a >> b >> c;
        sum = a;
        mod = b % 3;
        if (mod == 0)
        {
            sum += b / 3;
            if (c % 3 == 0)
            {
                sum += c / 3;
            }
            else
            {
                // 25%3=1
                sum += (c / 3) + 1;
            }
            cout << sum << endl;
        }
        else if (c >= (3 - mod))
        {

            b += (3 - mod);
            c -= (3 - mod);
            sum += b / 3;
                if (c % 3 == 0)
            {
                sum += c / 3;
            }
            else
            {
                sum += (c / 3) + 1;
            }
            cout << sum << endl;
        }
        else
        {
            cout << -1 << endl;
        }

     
    }
    return 0;
}