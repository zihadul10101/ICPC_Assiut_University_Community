#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int n,anton=0,danik=0,fr=0;
   cin>>n;

    string ss;
    cin>>ss;
    
    for(int i=0;i<n;i++){
   if(ss[i]=='A'){
    anton++;
   }else if(ss[i]=='D'){
    danik++;
   }else{
    fr++;
   }
    
  

   }
//    cout<<"A"<<anton<<endl;
//    cout<<"D"<<danik<<endl;
if(anton>danik){
cout<<"Anton"<<endl;
}else if(danik==anton){
cout<<"Friendship"<<endl;
}else{
cout<<"Danik"<<endl;
}
    return 0;
}