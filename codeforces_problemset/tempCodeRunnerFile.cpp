#include <bits/stdc++.h>
using namespace std;

int main() {

string first,second;
cin>>first>>second;
for(int i=0;i<first.size();i++){
    if(isupper(first[i])){
        first[i]=tolower(first[i]);
    }
}
for(int i=0;i<second.size();i++){
    if(isupper(second[i])){
        second[i]=tolower(second[i]);
    }
}
int flag=0;
for(int i=0;i<first.size();i++){
   if(first[i]>second[i]){
    flag=1;
    break;
   }
 
}
if(first==second){
    cout<<"0"<<endl;
}else if(flag==1){
      cout<<"1"<<endl;
}else{
      cout<<"-1"<<endl;
}

}