// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int num, p,flag=0;
//     cin >> num >> p;
//     int arr[100];
//     for (int i = 1; i <= num; i++) {
//         cin >> arr[i];
//     }

//      for (int i = 1; i <= num; i++) {
//               if(arr[i]>=arr[p] && arr[i]>0){
//                 flag++;
//         }

//     }
//       cout<<flag<<endl;
//     return 0;
// }
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