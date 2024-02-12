// Find gcd with for loop
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num1,num2,gcd;
//     cin>>num1>>num2;
//      for(int i=1;i<=num1&&i<=num2;i++){
//           // cout<<"num one"<<"="<<num1%i<<" "<<"Position"<<i<<endl;
//           //  cout<<"num two"<<"="<<num2%i<<""<<"Position"<<i<<endl;
//         if(num1%i==0 && num2%i==0){
//             gcd=i;
//            // cout<<"gcd with loop"<<"="<<gcd<<endl;
//         }
//      }
//      cout<<"gcd"<<"="<<gcd<<endl;
//     return 0;
// }
// Find gcd with while loop
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    while(num1 != num2){
        if(num1>num2){
            num1=num1-num2;
        }else{
            num2=num2-num1;
        }
    }
    cout<<"gcd"<<"="<<num2<<endl;
    return 0;
}
// Find gcd with for loop and if else
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num1,num2,x,gcd;
//     cin>>num1>>num2;
//     if(num1<num2){
//      x=num2;
//     }else{
//    x=num1;
//     }
//      for(x>=1;x--){
//     if(num1%x==0 && num2%x==0){
//         gcd=x;
//         break;
//     }
//   }
//     cout<<"gcd"<<"="<<gcd<<endl;
//     return 0;
// }

// Find gcd with many number
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int num1,num2
//     return 0;
// }