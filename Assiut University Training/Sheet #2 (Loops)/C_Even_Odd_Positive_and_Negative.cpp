#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int testCase,odd=0,even=0,positive=0,negative=0;
	cin>>testCase;
    for(int i=1;i<=testCase;i++){
      int num;
      cin>>num;
    
     if(num%2==0){
      even+=1;
      }
      else if(num%2 !=0 ){
      odd+=1;
      }
    
      if(num>0){
        positive+=1;
      }
      else if(num<0) {
       negative+=1;
      }
     
      
     

    }
   
   for(int i=1;i<=testCase;i++){
    
   }

  
        cout<<"Even: "<<even<<endl;
        cout<<"Odd: "<<odd<<endl;
        cout<<"Positive: "<<positive<<endl;
        cout<<"Negative: "<<negative<<endl;   
    

}