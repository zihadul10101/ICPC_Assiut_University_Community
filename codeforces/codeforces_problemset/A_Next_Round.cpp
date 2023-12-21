#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, p,flag=0;
    cin >> num >> p;
    int arr[100];
    for (int i = 1; i <= num; i++) {
        cin >> arr[i];
    }
 
     for (int i = 1; i <= num; i++) {
              if(arr[i]>=arr[p] && arr[i]>0){
                flag++;
        }
    
    }
      cout<<flag<<endl;
        
        
       


    return 0;
}
