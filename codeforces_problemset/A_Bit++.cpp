#include <bits/stdc++.h>
using namespace std;

int main() {
 
    char ab[100];

    int n,flag=0;

    cin>>n;
    while(n--){
        cin>>ab;
       if(ab[1] == '+'){
         flag++;
       }else{
        flag--;
       }
    }
        
      cout<<flag<<endl;  
       


    return 0;
}
