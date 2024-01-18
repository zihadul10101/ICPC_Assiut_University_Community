#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    string s;
    cin >> n>>s;

  

    for (int i = 0; i < s.size();i++) {
       sum+=s[i]-'0';
    }
    cout<< sum << endl;

    return 0;
}
