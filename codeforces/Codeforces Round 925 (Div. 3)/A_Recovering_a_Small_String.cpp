#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int num;
    cin >> num;
    vector<char>v(27);
    char ch='a';
    for(int i=1;i<=26;i++){
        v[i]=ch++;
    }
    if (num <= 28) {
        int temp=num-2;
        cout << "aa" <<v[temp] << endl;
    } else if (num <= 53) {
        num -= 26;
          int temp=num-1;
        cout << "a" << v[temp] << "z" << endl;
    } else {
        num -= 52;
         int temp=num;
        cout << v[temp] << "aa" << endl;
    }
}

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        solve();
    }
    return 0;
}
