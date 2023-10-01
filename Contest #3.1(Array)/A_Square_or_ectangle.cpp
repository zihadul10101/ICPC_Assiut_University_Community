#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"Square"<< endl;
        }else{
          cout<<"Rectangle"<< endl;  
        }
    }
}