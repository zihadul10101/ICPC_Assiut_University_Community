#include <bits/stdc++.h>
using namespace std;

int main(){
  long long  int num;
    cin>>num;
    if(num>=10){
        cout<<num<<endl;
    }
    
    else{
        int digit=num%10;
        if(digit==0){
           cout<<"0"<<endl; 
        }else{
            num/=10;
            cout<<num<<endl; 
        }
       
    }
}

