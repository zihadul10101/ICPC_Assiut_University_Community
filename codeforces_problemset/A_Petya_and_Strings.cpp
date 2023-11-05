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
if(first==second){
    cout<<"0"<<endl;
}else if(first>second){
      cout<<"1"<<endl;
}else{
      cout<<"-1"<<endl;
}

}