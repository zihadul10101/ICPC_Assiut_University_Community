#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, x;
  cin >> n >> x; // 7
  int counter = 0;
  for (int i = 0; i < n; i++)
  {
    char op;
    long long num;
    cin >> op >> num;
    if (op == '+')
    {
      x += num; //7 + 5=12
    }
    else
    {
      if (num <= x)//10<=12//20 <=2
      {
        x -= num;// 12 -10=2
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
