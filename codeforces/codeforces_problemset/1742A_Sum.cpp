#include <bits/stdc++.h>
using namespace std;
void sum(long long a,long long b,long long c){
    if((a+b)==c || (b+c)==a || (a+c)==b){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;  
    }
}
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
       long long a,b,c;
        cin>>a>>b>>c;
      sum(a,b,c);
    }
}