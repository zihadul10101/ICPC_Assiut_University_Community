#include<bits/stdc++.h>
using namespace std;
int main(){
    long long num,digit;
    cin>>num;
   digit=num/1000;
   
     if(digit%2==0){
        cout<<"EVEN"<<endl;
    }
    else{
      cout<<"ODD"<<endl;  
    }
}