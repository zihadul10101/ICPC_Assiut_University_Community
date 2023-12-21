#include <bits/stdc++.h>
using namespace std;

void printNumbersFromNTo1(int N) {
    if(N == 0){
		return;
	}
   else if (N == 1) {
        cout << 1;
    } else {
        cout << N << ' ';
        printNumbersFromNTo1(N - 1);
    }
}
int main() {
    int num;
	cin>>num;
	printNumbersFromNTo1(num);
}
// n=5 printNu=(5-1)=printNum(4)
//  printNum=(4-1)=printNum(3)
//printNum=(3-1)=printNum(2)
//printNu=(2-1)=printNum(1)
// printNu=(1-1)=printNum(0)