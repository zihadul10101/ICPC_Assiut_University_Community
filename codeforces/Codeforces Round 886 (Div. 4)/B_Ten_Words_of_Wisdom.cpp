#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll testCase;
   cin>>testCase;
   while(testCase--){
     int n;
    cin>>n;
    ll max = 0, pos;
 
   for(int i=0;i<n;i++){
     int w,q;
     cin>>w>>q;
     if(w<11){
     if (q>max)
            {
                max = q;
                pos = i + 1;
                //   cout<<"max"<<max<<endl;
                //   cout<<"index"<<i<<endl;
            }
     }
   } 
   cout << pos << nline;
   }
    return 0;
}