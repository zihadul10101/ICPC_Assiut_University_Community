#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans=0;
    int le=s.length();
    for(int i=0;i<le;i++){
        int cout=0;
        if(s[i]=="0"){
           while(s[i]=="0" && i<le){
               cout++;
               i++;
           }
        }else{
           if(s[i]=="1"){
           while(s[i]=="1" && i<le){
               cout++;
               i++;
           }  
        }
        if(count>=7){
            ans=1;
        }
    }
  if(ans==1){
    cout<<"YES"<<endl;
  }else{
     cout<<"NO"<<endl;
  }
    return 0;
}