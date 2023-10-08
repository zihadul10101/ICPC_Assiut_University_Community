#include<bits/stdc++.h>
using namespace std;
int main(){
int position,first,sec;
cin>>position;
 first=0;
 sec=1;
 if(position==1){
    cout<<first<<" ";
 }
 else if(position==2){
   cout<<first<<" "<<sec<<endl;
 }
 else{
    cout<<first<<" "<<sec<<" ";
for(int i=3;i<=position;i++){
  int res=first+sec;
  first=sec;
  sec=res;
  cout<<res<<" ";
}

 }

}