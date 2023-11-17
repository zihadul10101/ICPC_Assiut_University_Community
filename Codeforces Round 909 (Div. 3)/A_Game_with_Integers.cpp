#include <iostream>
#include <climits>
using namespace std;
void game(){
     int n;
    cin>>n;
  cout << ((n + 1) % 3 == 0 || (n - 1) % 3 == 0 ? "First" : "Second") << '\n'; 
}
int main() {
int testCase;
cin>>testCase;
while(testCase--){
   
    game();
     
}
    return 0;
}