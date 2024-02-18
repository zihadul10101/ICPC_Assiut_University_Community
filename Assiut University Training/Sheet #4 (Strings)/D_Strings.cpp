#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    int first=s1.length();
    int secound=s2.length();
    cout<<first<<" "<<secound<<endl;
    cout<<s1<<s2<<endl;
    if (!s1.empty() && !s2.empty()) {
        // Swap first characters
        char temp = s1[0];
        s1[0] = s2[0];
        s2[0] = temp;

        // Output the modified strings
       cout<< s1 << " " << s2 <<endl;
    }
    //  else {
    //    cout << "One or both strings are empty." <<endl;
    // }

    return 0;
}