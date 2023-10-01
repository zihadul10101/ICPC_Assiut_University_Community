#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,column;

    cin>>row>>column;
    int arr[row][column];
    for(int i=0;i<row;i++){  //i= 0 1
     for(int j=0;j<column;j++) // z=0 1
     {
// i=0 j=0 0 0
// i=0 j=1 0 1
// i=1 j=0 1 0
// i=1 j=1 1 1
cin>>arr[i][j];
     }
    }
    int search;
    cin>>search;
    int flag=0;

    for(int i=0;i<row;i++){  //i= 0 1
     for(int j=0;j<column;j++) // z=0 1
     {
        if(arr[i][j]== search){
             flag=1;
              break;
         }
     }
    }
    if(flag==1){
        cout<<"will not take number"<<endl;
    }
    else{
        cout<<"will take number"<<endl;
    }
}
