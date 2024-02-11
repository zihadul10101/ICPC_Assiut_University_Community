#include<bits/stdc++.h>
using namespace std;
void slove(){
    char ch[8][8];
    for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
        cin>>ch[i][j];
       } 
    }
    for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
        if(ch[i][j]>=97 && ch[i][j]<=122){
         cout<<ch[i][j];
        }
       } 
    }
   cout<<endl;
}
int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        slove();
    }
}