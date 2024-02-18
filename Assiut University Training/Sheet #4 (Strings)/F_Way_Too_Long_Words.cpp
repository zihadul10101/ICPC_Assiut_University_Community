#include<bits/stdc++.h>
using namespace std;

int main() {

   int size;
   cin>>size;
   for(int i=0;i<size;i++){
    string s;
    cin >> s;
    int sLength = s.length();
    if(sLength<=10){
        cout<<s<<endl;
    }else{
       int l=sLength-2;
       cout<<s[0]<<l<<s[sLength-1]<<endl;
    }
   }

    return 0;
}