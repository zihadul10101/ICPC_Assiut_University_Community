#include<bits/stdc++.h>
using namespace std;
int main()
{
	string value; 
	// 0123456789 10 11
	// ahhelllllo o  u  12
	cin>>value;
	//                01234
	string myValue = "hello";
	int i = 0; // 3
	int flag = 0;
	while(true){
		if(i == value.size() || flag == myValue.size()){
			break;
		}
		if(value[i] == myValue[flag]){
			flag++; // 2
		}
		i++;
	}
	if(flag == 5){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}