#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans=0;
   
    for(int i=0;i<s.size();i++){
        int count=0;
        if(s[i]=='0'){
           while(s[i]=='0' && i<s.size()){
               count++;
               i++;
           }
        }else{
           if(s[i]=='1'){
           while(s[i]=='1' && i<s.size()){
               count++;
               i++;
           }  
        }
       
        }
       if(count>=7){
            ans=1;
        }
          i--;
    }
  if(ans==1){
    cout<<"YES"<<endl;
  }else{
     cout<<"NO"<<endl;
  }
    return 0;
}


// #include<iostream>

// using namespace std;

// int main(){
//     string s1;
//     cin>>s1;
//     int condition = 1;
//     for(int i=1; i<=s1.length(); i++){
//         if(s1[i] == s1[i-1]){
//             condition++;
//             if(condition==7){
//                 cout<<"YES"<<endl;
//                 return 0;
//             }
//         }else{
//             condition=1;
//         }
        
//     }
//     cout<<"NO"<<endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// string s;
// cin>>s;
// if(s.find("0000000")<100||s.find("1111111")<100){
// cout<<"YES";
// return 0;
// }
// cout<<"NO";
// return 0;
// }