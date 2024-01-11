#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int k;
        cin>>k;
        for(int i=1;;i++){
            if(i%3==0 || i%10==3){
                continue;
            }else{
                --k;
              //i=1   k=6
              //i=2   k=5
              //i=3   k=5
              //i=4   k=4
              //i=5   k=3
              //i=6   k=3
              //i=7   k=2
              //i=8   k=1
              //i=9   k=0
               
                if(k==0){
                    cout<<i<<endl;
                    break;
                }
            }
        }       
    }
    return 0;
}