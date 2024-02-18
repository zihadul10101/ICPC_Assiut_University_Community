#include<bits/stdc++.h>
using namespace std;



int main() {
  string s;
   cin>>s;
   int sLength=s.length();
   int found=0;
   for(int i=0;i<sLength/2;i++){
        if (s[i] != s[sLength - 1 - i]) {// arr[0] != arr[5-1-0]
        found=1;
     
        }
   }
 if(found==1){
      cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;  
         }
    return 0;
}
