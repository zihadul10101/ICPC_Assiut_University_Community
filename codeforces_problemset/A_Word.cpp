#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin>>str;
   int upper = 0, lower = 0, number = 0, special = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        // else if (str[i]>= '0' && str[i]<= '9')
        //     number++;
        else
            special++;
    }
    if(upper<lower || upper==lower){
      for (int i = 0; i < str.length(); i++) {
            str[i] = tolower(str[i]); // Corrected to use tolower
        }
        cout << str << endl;
    }else{
          for (int i = 0; i < str.length(); i++) {
            str[i] = toupper(str[i]);
        }
        cout << str << endl;
      
    }
    // cout << "Upper case letters: " << upper << endl;
    // cout << "Lower case letters : " << lower << endl;
    // cout << "Number : " << number << endl;
    // cout << "Special characters : " << special << endl;
// if(str[i] >= 65 and str[i] <=90), then it is uppercase letter, 
 
// if(str[i] >= 97 and str[i] <=122), then it is lowercase letter, 
 
// if(str[i] >= 48 and str[i] <=57), then it is number, 
 
// else it is a special character
}