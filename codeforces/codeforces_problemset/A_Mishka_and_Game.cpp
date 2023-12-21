#include <bits/stdc++.h>
using namespace std;
// int win(int num1,int num2){ // num = 0
    

  
	
// 	return num*fact(num-1);
// }
int main() {
    int testCase;
   int Mishka=0;
    int Chris=0;
    int draw=0;
	cin>>testCase;
	while(testCase--){
     int num1,num2;
   
     cin>>num1>>num2;
      if(num1>num2){
        Mishka++;
    }
    else if(num1<num2){
      Chris++; 
    }else{
        draw++;
    }

 
    }
    // cout<<"M"<<Mishka<<endl;
    // cout<<"Char"<<Chris<<endl;
    // cout<<"D"<<draw<<endl;
       if(Mishka>Chris){
        cout<<"Mishka"<<endl;
    }
    else if(Mishka==Chris){
         cout<<"Friendship is magic!^^"<<endl; 
    }
    else{
          cout<<"Chris"<<endl;
    }
}