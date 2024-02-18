#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,found=0;
	cin>>num;
    for(int i=2;i<=num;i+=2){
        if(i%2==0){
             cout<<i<<endl;
           found=1;
        }
       
    }
    if(found==0){
          cout<<"-1"<<endl;
    }
    return 0;
}
