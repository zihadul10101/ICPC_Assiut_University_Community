#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,count=0;
      cin>>n;
while(n>0){
    if(n%2==1){
    n--;
    count++;
}else{
  n=n/2;   
}
}
cout<<count;
      return 0;
}
// n=5
// count=1  n=4
// n=4/2=2
// n=2/2=0
//count =1