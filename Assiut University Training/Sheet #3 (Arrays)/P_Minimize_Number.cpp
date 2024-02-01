#include<bits/stdc++.h>
using namespace std;
int main()
{
   // start of input section
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    // end of input section
    int result=0;
    for(int i=0;i<size;i++) 
    {
     int counter=0;
     if(arr[i]%2!=0)
     {
        cout<<0<<endl;
        return 0;
     }
     while(arr[i]%2==0){
        counter++;
       //  cout<<"counter"<<counter<<endl;
        arr[i]/=2;

     }
    
     
     if(i==0 || counter < result)
     {
        result= counter;
       // cout<<"result"<<result<<endl;
     }
   
    }
  cout<<result<<endl;
}