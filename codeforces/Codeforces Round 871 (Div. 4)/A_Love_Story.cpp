#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s, givenS;
  cin >> s;
  givenS = "codeforces";
  int found = 0;
  for (int i = 0; i < 10; i++)
  {
    if (s[i] != givenS[i])
    {
      found++;
    }
  }
  cout << found << endl;
}
int main()
{
  int testCase;
  cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}