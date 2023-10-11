#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size][size];
    // get input 
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }
 long long sum1=0;
  long long sum2=0;   

   for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
        {
            // main diagonal
             if (i == j){
              sum1+=arr[i][j];
             }
              // Condition for secondary diagonal
            if ((i + j) == (size - 1)){
             sum2+=arr[i][j]; 
            }
        }
    }
//cout<<abs(sum1) + abs(sum2)<<endl;
	cout<<abs(sum1 - sum2)<<endl;

}


