#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int num1,num2;
    cin>>num1>>num2;
    while(num1 != num2){
        if(num1>num2){
            num1=num1-num2;
        }else{
            num2=num2-num1;
        }
    }
    cout<<num2<<endl;
   

    return 0;
}