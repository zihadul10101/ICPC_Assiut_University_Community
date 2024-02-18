#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,even=0,odd=0;
        cin>>n;
        for(int i=0;i<n;i++){
           if(n%2 ==0){
                  even++;
             cout<<"even number"<<even<<endl;
            
           }else{
             odd++;
               cout<<"odd number"<<odd<<endl;
           }
           
        }
          cout<<odd<<even<<endl;
    }
  
}