#include<bits/stdc++.h>
using namespace std;

int main() {
  long long int num,last,reversed=0;
  
    cin >> num;
     int temp=num;
     while(num>0){
         last=num%10;
         reversed= (reversed*10)+last;
         num/=10;
        
    }
  
    cout<<reversed<<endl;
  //  cout<<temp<<endl;
    if(temp==reversed){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  
    return 0;
}