#include <bits/stdc++.h>
using namespace std;

void printDecToBinary(int num) {
    //29
       if(num==0){
        return;
       }
        //Dec to binary       
    
      printDecToBinary(num/2);
      //29/2=14,14/2=7, 7/2=3, 3/2=1,1/2=0
     cout<<num%2;
      //29%2==1,
      //14%2==0,
      //7%2==1,
      //3%2==1,
      //1%2==1
      // 1 0 1 1 1
      //1 1 1  1
  
}
int main() {
    int testCase;
	cin>>testCase;
    while(testCase--){
        int num;
        cin>>num;
        printDecToBinary(num);
        cout<<endl;
       
    }

}