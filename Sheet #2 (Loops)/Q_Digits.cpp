#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    for(int i=1;i<=testCase;i++){
          string number;
          //                          0   1    2  
          cin>>number; // 123     ['1','2','3']
          int size = number.size(); 
          for(int z =size-1;z>=0;z--){ // z<=4
			cout<<number[z]<<" ";
		}
		cout<<endl;
    }
  
}