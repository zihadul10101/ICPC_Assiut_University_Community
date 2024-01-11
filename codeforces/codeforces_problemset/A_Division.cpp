#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"

void solve(int n){
 long long int rating;
   //For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399
    for(int i=0; i<n; i++){
        cin >>rating;
        if(1900<=rating){
            cout<<"Division 1"<<endl;
        }
        else if(1600 <=rating ){
            cout<<"Division 2"<<endl;
        }
        else if(1400<=rating ){
cout<<"Division 3"<<endl;
        }
        else if(rating<=1399){
cout<<"Division 4"<<endl;
        }
      
    }
   

  
      
}
int main() {
    int n;
    cin >> n;
        solve(n);
    return 0;
}