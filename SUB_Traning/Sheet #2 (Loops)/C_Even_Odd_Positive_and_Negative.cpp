#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int num,even=0,odd=0,neg=0,pos=0;
	cin>>num;
    int arr[num];

    for(int i=0;i<num;i++){
        cin>>arr[i];
         if(arr[i]%2==0){
            even++;
         }else if(arr[i]%2 != 0){
          odd++;
         }
        if(arr[i]<0){
          neg++;
         }
         else if(arr[i]>0){
           pos++;
         }  
    }
//     Even: 3
// Odd: 2
// Positive: 1
// Negative: 3

    cout<<"Even:"<<" "<<even<<endl;
    cout<<"Odd:"<<" "<<odd<<endl;
    cout<<"Positive:"<<" "<<pos<<endl;
    cout<<"Negative:"<<" "<<neg<<endl;
    
    return 0;
}
