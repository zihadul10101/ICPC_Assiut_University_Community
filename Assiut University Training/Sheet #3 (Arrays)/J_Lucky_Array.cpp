#include <bits/stdc++.h>
using namespace std;
 
int main() {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
      
        int min=arr[0];
        for (int i = 0; i < size; i++) {
     
          if(min>arr[i]){
            min=arr[i];
         
          }  
        }
           int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == min) {
            count++;
        }
    }
    if(count%2 != 0){
   cout <<"Lucky"<< endl;
    }else{
           cout <<"Unlucky" << endl;
    }
   
        
   
}