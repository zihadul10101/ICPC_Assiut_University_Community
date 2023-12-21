#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n,k;
    cin >> n >> k;

    while (k--)
    {
       int digit=n%10;
       if(digit != 0){
         n--;
       }else{
        n=n/10;
       }
    }
  cout<<n<<endl;
    return 0;
}