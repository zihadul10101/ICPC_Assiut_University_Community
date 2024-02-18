#include<bits/stdc++.h>
using namespace std;

int main() {
     string s;
    getline(cin,s);
  int sLength = s.length();
   for (int i = 0; i <sLength; i++) {
        if (s[i] == ',') {
          cout << ' '; // Replace comma with space
         continue;
        }else if(s[i] >=65 && s[i] <=90){
            s[i]+=32;
        }else{
          s[i]-=32;   
        }
       cout<<s[i]; 
    }
    return 0;
}

// In ASCII (American Standard Code for Information Interchange),
//  the numerical values assigned to characters for both uppercase and lowercase letters follow a specific pattern.

// Uppercase letters ('A' to 'Z') have ASCII values ranging from 65 to 90.
// Lowercase letters ('a' to 'z') have ASCII values ranging from 97 to 122.
// You can convert between uppercase and lowercase letters by adjusting the ASCII values. Here are the relationships:

// To convert an uppercase letter to a lowercase letter, add 32 to its ASCII value.
// To convert a lowercase letter to an uppercase letter, subtract 32 from its ASCII value.
// For example:

// 'A' (uppercase) has an ASCII value of 65. To get the corresponding lowercase 'a', add 32: 65 + 32 = 97.
// 'a' (lowercase) has an ASCII value of 97. To get the corresponding uppercase 'A', subtract 32: 97 - 32 = 65