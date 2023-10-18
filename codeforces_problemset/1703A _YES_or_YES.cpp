#include <bits/stdc++.h>
using namespace std;
#include <string>
void sum(string a){
    if((a[0] == 'Y' || a[0]=='y') && (a[1] == 'E' || a[1]== 'e') && (a[2] == 'S' || a[2]== 's')){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;  
    }
}
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
       string myString;
        cin>>myString;
        sum(myString);
    }
}