#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,sum=0,evenSum=0,oddSum=0;
    cin >> a>>b;
   long long int minNum=min(a,b);
  long long  int maxNum=max(a,b);
    for(long long int i=minNum;i<=maxNum;i++){
     sum+=i;
     if(i%2==0){
       evenSum+=i;
     }else{
         oddSum+=i; 
     }
    }
    cout<<sum<<endl;
    cout<<evenSum<<endl;
    cout<<oddSum<<endl;
    return 0;
}