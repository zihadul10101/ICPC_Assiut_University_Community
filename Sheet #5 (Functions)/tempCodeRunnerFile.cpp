#include <bits/stdc++.h>
using namespace std ;
bool isPrime (int num){
    if(num<=1){
      return 0;
    }
      for(int i=2;i<num;i++){
        if(num%i==0){
          return 0;
        }
       return 1;
    }
 
}
int main()
{
    int a;
    cin>>a;
    while(a--){
      long long number;
      cin>>number;
   // isPrime(a);
     if(isPrime(number)){
    cout<<"YES"<<endl;
   }else{
     cout<<"NO"<<endl;
   }
    }
    
  
   
}