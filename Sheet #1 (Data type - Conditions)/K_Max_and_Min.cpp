// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long  int num1,num2,num3,max,min;
// 	  cin>>num1>>num2>>num3;
//      // 1 2 3

//      if(num1>=num2 && num1>=num3){ //num1
//       if(num2>num3){
//         cout<<num3<<" "<<num1<<endl;
//       }
//       else{
//         cout<<num2<<" "<<num1<<endl;
//       }
//      }
    
//      else if(num2>=num1 && num2>=num3){//num2
//       if(num1>num3){
//         cout<<num3<<" "<<num2<<endl;
//       }
//       else{
//         cout<<num1<<" "<<num2<<endl;
//       }
//      }
//       // 3>1 && 3>2
//       else if(num3>=num1 && num3>=num2){//num3
//       // 1>2
//       if(num1>num2){
//         cout<<num2<<" "<<num3<<endl;
//       }
      
//       else{
//         cout<<num1<<" "<<num3<<endl;
//         //min=1 max=3
//       }
//      }
//      }


#include <iostream>
using namespace std;

int main() {
    long long int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

   
   
    // 1 2 3
    // Calculate the minimum and maximum values
    long long int min = num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
    long long int max = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    cout<<min<<" "<<max<<endl;
   

    return 0;
}
