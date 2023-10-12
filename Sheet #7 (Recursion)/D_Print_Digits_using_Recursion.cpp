#include <bits/stdc++.h>
using namespace std;
int position=0;
void printDigit(string N) {
    // 123
    if(position==N.size()){
        return;
    }
        cout<<N[position]<<" ";
        //1 2 3
        position++;
        //0+1+1
      return  printDigit(N);
  
}
int main() {
    int testCase;
	cin>>testCase;
    while(testCase--){
        string num;
        cin>>num;
     
        printDigit(num);
           cout<<endl;
           position=0;
    }

}