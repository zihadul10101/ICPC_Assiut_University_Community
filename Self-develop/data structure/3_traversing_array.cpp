// #include <bits/stdc++.h>
// using namespace std;
// void traversing(int arr[],int n,int lower,int upper){
//     int k = lower;//0
//      while (k <= upper) {//0<=4
//        cout<<arr[k]<<endl;
//        k++;
//      }
// }
// int main()
// {
//     int linnerArray[] = {1932,1933,1934,1935,1936,1937,1938};
//     int size = sizeof(linnerArray) / sizeof(linnerArray[0]);
//     int lowerBound = 0;        //  lower bound
//     int upperBound = size - 1; //  upper bound
//     traversing(linnerArray, size, lowerBound, upperBound);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
  int autoArray[]={330,650,60,50,380,293,400,405};

  int count=0;

  for(int k=1932;k<1940;k++){
   if(autoArray[k-1932]>300){
 
     count++;
         cout<<"Traversing year"<<"="<<k<<" "<<"Total sold" <<"="<<autoArray[k-1932]<<endl; 
   }
  } 
  cout<<"Traversing count"<<"="<<count<<endl; 
  return 0;
}