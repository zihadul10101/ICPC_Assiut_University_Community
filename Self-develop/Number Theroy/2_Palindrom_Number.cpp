#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,r,sum=0,temp;
 //   cout<<"Enter n number"<<endl;
    cin>>num;
   temp=num;
    while(num>0){
        r=num%10;
        sum=(sum*10)+r;
        num/=10;
    }
    if(temp==sum){
         cout <<temp << " is a palindrome number" << endl;
    }else{
        cout << temp << " is not a palindrome number" << endl;
    }
    return 0;
}
