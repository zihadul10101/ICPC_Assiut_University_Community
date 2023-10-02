#include<bits/stdc++.h>
using namespace std;
int main(){
double num;
cin>>num;
//234.000
//234 print 
// 534.958
//numInt=534
//result=534958-534
int numInt=num;
double result=num-numInt;
if(result!=0){
    cout<<"float"<<" "<<numInt<<" "<<result<<endl;
}else{
    cout<<"int"<<" "<<numInt<<endl;
}
}