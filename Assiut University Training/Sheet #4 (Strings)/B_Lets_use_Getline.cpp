#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int first = s.length();
    
    for (int i = 0; i < first; i++) {
        if (s[i] == '\\') {
            break;
        }
         cout << s[i];
    }

    return 0;
}
