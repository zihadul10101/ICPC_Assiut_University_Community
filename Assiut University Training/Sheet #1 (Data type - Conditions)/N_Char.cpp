#include<bits/stdc++.h>
using namespace std;
int main(){
    char X;
	cin>>X;

// Small= myChar>= 97 && myChar<=122
// Captal= myChar>= 65 && myChar<=90
// 97-33=65 

    if (X >= 'a' && X <= 'z') {
        // Convert lowercase to uppercase (ASCII difference is 32)
        char uppercaseX = X - 32;
        cout << uppercaseX << endl;
    } else if (X >= 'A' && X <= 'Z') {
        // Convert uppercase to lowercase (ASCII difference is 32)
        char lowercaseX = X + 32;
        cout << lowercaseX << endl;
    } 
}