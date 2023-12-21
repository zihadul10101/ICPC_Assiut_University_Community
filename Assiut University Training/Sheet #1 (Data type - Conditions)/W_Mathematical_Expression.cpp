#include<bits/stdc++.h>
using namespace std;

void validate(int result,int myResult){
	if(myResult == result){
		cout<<"Yes"<<endl;
	} else {
		cout<<myResult<<endl;
	}
	return;
}
int main(){
    int num1,num2,result;
	char opr,equal;
	cin>>num1>>opr>>num2>>equal>>result;
    int myResult=0;
	switch(opr){
		case '+':
			myResult = num1 + num2;
			validate(result,myResult);
		break;
		case '-':
			myResult = num1 - num2;
			validate(result,myResult);
		break;
		case '*':
			myResult = num1 * num2;
			validate(result,myResult);
		break;
	}

}