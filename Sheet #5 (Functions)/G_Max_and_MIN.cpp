#include<bits/stdc++.h>
using namespace std;

void sorting(int arr[],int size){
	//   int &min = *min_element(arr,arr+size );
    //   int &max = *max_element(arr,arr+size );
    //   cout<<min<<" "<<max;
      sort(arr,arr+size);
}
int main(){
	int size;
	cin>>size;
       int arr[size];
    for(int i=0;i<size;i++){
    cin>>arr[i]; 
     }
 sorting(arr,size);// [1,5,6,7]
  cout<<arr[0]<<" "<<arr[size-1];
      
    

}