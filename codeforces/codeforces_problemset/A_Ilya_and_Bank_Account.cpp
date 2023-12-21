#include <bits/stdc++.h>
using namespace std;

int main(){
  long long  int num;
    cin>>num;
    if(num>=10){
        cout<<num<<endl;
    }
    
    else{
        int fdigit=num%10;
        int sdigit=num%100;

        if(fdigit){
           cout<<"0"<<endl; 
        }else{
            num/=10;
            cout<<num<<endl; 
        }
       
    }
}

