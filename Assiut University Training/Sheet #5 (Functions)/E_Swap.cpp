#include <bits/stdc++.h>
using namespace std ;


void isSawp (int num1,int num2){
  int temp;
  temp = num1;
  num1=num2;
  num2=temp;
   cout<<num1<<" "<< num2;
}
int main()
{
   long long a,b;
    cin>>a>>b;
 
  isSawp(a,b);
   
   
    
  
   
}