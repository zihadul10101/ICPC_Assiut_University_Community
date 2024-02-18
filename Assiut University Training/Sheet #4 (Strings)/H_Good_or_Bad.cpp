#include<bits/stdc++.h>
using namespace std;

void solve(string input,int sLength){
       bool isGood = false;
      // The loop condition input.length() - 2 is used to ensure that there are at least three characters remaining in the string
      //  for the comparison input[i] == '0' && input[i + 1] == '1' && input[i + 2] == '0' or input[i] == '1' && input[i + 1] == '0' && input[i + 2] == '1'.
    for (int i = 0; i < sLength - 2; i++) {
        if ((input[i] == '0' && input[i + 1] == '1' && input[i + 2] == '0') ||
            (input[i] == '1' && input[i + 1] == '0' && input[i + 2] == '1')) {
            isGood = true;
            break;
        }
    }

    if (isGood) {
        cout << "Good" << endl;
    } else {
        cout << "Bad" << endl;
    } 
}

int main() {
  int size;
   cin>>size;
   for(int i=0;i<size;i++){
    string input;
    cin >> input;
    int sLength = input.length();
     solve(input,sLength); 
   }
    return 0;
}
