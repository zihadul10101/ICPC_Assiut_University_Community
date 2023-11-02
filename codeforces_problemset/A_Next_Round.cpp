#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, p;
    cin >> num >> p;
    int arr[100];
    for (int i = 1; i <= num; i++) {
        cin >> arr[i];
    }
    
        int first = arr[p];
        int adv = arr[p+1];
    //   cout<<"first"<<first<<endl;
    //   cout<<"adv"<<adv<<endl;
        if((first+adv>=first) && first != 0 && adv !=0){
         
         cout << p+1 << endl;
        }
        else if(first+adv<first &&  first != 0 && adv !=0){
             cout<< arr[p] << endl; 
        }
        else{
       cout<< "0" << endl;
        }
        
       


    return 0;
}
