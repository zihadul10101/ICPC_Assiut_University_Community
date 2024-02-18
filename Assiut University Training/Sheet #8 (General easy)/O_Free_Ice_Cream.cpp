#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, x;
  cin >> n >> x;
  int counter = 0;
  for (int i = 0; i < n; i++)
  {
    char op;
    long long num;
    cin >> op >> num;
    if (op == '+')
    {
      x += num;
    }
    else
    {
      if (num <= x)
      {
        x -= num;
      }
      else
      {
        counter++;
      }
    }
  }
  cout << x << " " << counter << endl;

  return 0;
}
