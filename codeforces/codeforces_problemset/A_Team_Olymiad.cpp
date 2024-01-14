#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; // number of test cases 7
    cin >> t;
     int arr1[50001];
     int arr2[50001];
     int arr3[50001];
    int a1=0,a2=0,a3=0;
    for(int i=1;i<=t;i++){ 
     //1 2 3 4 5 6 7
    // 1 3 1 3 2 1 2
         int num;
         cin>>num;
         if(num==1)// size 1 1 1=3
         {
         arr1[a1]=i;//i=1 3 6
         a1++;
         }
         else if(num==2)// size 2 2=2
         {
       arr2[a2]=i;//i=5 7
         a2++;
         }
         else// size 3 3=2
         {
       arr3[a3]=i; // i=2 4
         a3++;
         }
    }
   int team=min(a1,min(a2,a3));
   cout<<team<<endl;//2
      for(int i=0;i<team;i++){ //  0 1 
      cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;  
    //   cout<<"arr1"<<arr1[i]<<" "<<endl;  
    //   cout<<"arr2"<<arr2[i]<<" "<<endl;  
    //   cout<<"arr3"<<arr3[i]<<" "<<endl;  
         }
    return 0;
}
// t=5
// num= 1 2 2 3 3
// num==1 (1 position=1)
// num==2 (2 2 position=2 3)
// num==3 (3 3 position=4 5)
// team=1
// 1 2 4