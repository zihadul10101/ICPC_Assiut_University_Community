#include <bits/stdc++.h>
using namespace std;
void solve()
{
   long long int a, sum1 = 0;
    cin >> a;
    if (a < 10)
    {
        sum1 = a * (a + 1) / 2;
        // cout<<"sum1 =="<<sum1<<endl;
        cout << sum1 << endl;
    }
    else
    {
      long long  int sum2 = 0, sum3 = 0;
        sum2 = 45;
      long long  int le = a - 9;
      //  cout << "length==" << le << endl;
        for (int i = 1; i <= le; i++)
        {
            sum3 += i;
        }
        cout << sum2 + sum3 << endl;
    }
}
 
int main()
{
 
    long long int n;
 
    cin >> n;
    while (n--)
    {
        solve();
    }
 
    return 0;
}