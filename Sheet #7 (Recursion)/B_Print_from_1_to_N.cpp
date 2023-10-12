#include <bits/stdc++.h>
using namespace std;
int flag=1;
void printNum(int num){ // num = 0
	if(num == 0){
		return;
	}
     // 1 2 3 4 5
          cout<< flag++ <<endl;
	     return printNum(num-1);
}
int main() {
    int num;
	cin>>num;
	printNum(num);
}
// n=5 printNu=(5-1)=printNum(4)
//  printNum=(4-1)=printNum(3)
//printNum=(3-1)=printNum(2)
//printNu=(2-1)=printNum(1)
// printNu=(1-1)=printNum(0)