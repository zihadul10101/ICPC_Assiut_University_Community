#include<bits/stdc++.h>
using namespace std;
int main(){
    char myChar;
	cin>>myChar;
//     Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc
    if(myChar>=48&&myChar<=57){
        cout<<"IS DIGIT"<<endl;
    }
    else if(myChar>= 97 && myChar<=122){
        cout<<"ALPHA"<<endl;
		cout<<"IS SMALL"<<endl;
    }
    else{
        cout<<"ALPHA"<<endl;
		cout<<"IS CAPITAL"<<endl;
    }
}