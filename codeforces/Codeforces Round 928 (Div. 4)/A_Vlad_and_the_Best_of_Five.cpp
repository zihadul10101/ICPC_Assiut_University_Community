#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a=0, b=0;
  string s;
  cin >> s;
  int sl = s.length();
  for (int i = 0; i < sl; i++)
 
  {
    if (s[i] == 'A')
    {
      a++;
    }
    else
    {
      b++;
    }
  }
 
  if (a > b)
  {
    cout << "A" << endl;
  }
  else
  {
    cout << "B" << endl;
  }
}
 
 
int main()
{
 
  long long int n, a, b;
 
  cin >> n;
  while (n--)
  {
    solve();
  }
 
  return 0;
}