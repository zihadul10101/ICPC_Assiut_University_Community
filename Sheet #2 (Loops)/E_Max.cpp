#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
  
    long long int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
          if(arr[0] < arr[i]){
          arr[0] = arr[i];
          }
         
     
    }
      cout<<arr[0]<<endl;

}