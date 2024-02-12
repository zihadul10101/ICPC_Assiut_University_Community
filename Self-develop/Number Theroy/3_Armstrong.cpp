#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,r,sum=0,temp;
    cout<<"Enter n number";
    cin>>num;
   temp=num;
    while(num>0){
        r=num%10;
        sum=sum+(r*r*r);
        num/=10;
    }
    if(temp==sum){
         cout <<temp << " is a Armstrong number" << endl;
    }else{
        cout << temp << " is not a Armstrong number" << endl;
    }
    return 0;
}
