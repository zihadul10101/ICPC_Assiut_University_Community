#include <bits/stdc++.h>
using namespace std;
long long fact(int num){ // num = 0
	if(num <= 1){
		return num;
	}
	
	return num*fact(num-1);
}
int main() {
    long long num;
	cin>>num;
	cout<<fact(num);
}

// num=5 // 5 4 3 2 1
// 5*fact(4) 
// 4*fact(3)
// 3*fact(2) 
// 2*fact(1)
//if(num==1) return 1