#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    int n,pa=0,mAx=0;
    cin>>n;
    
    while(n--){
        int a,b;
        cin>>a>>b;
      pa=pa-a;
      pa=pa+b;
      mAx=max(mAx,pa);
       
    }
    cout<<mAx<<endl;
  
    return 0;
}