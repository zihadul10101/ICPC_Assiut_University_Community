#include<bits/stdc++.h>
using namespace std;

int main() {
    int num,found=0;
    cin >> num;
    for(int i=2;i<=num/2;i++){
        if(num%i ==0){
            cout<<"NO"<<endl;
            found=1;
            break;
        }
    }
    if(found==0){
          cout<<"YES"<<endl; 
     
    }
 

    return 0;
}