#include<bits/stdc++.h>
using namespace std;
void patternMatching(string text,string pattern) {
    int n = text.length();
    int m = pattern.length();
  cout<<"n"<<"="<<n<<endl;//19
  cout<<"m"<<"="<<m<<endl;//5
    for (int i = 0; i <= n - m; i++) { // 0<=10
        int j;
        for (j = 0; j < m; j++) {//0-5
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            cout << "Pattern found at index " << i << endl;
        }
    }
}
int main() {
    string text = "ABABDABACDABABCABAB"; //19
    string pattern = "ABABC";//5
// string text;
// cout << "Type your text: ";
// cin >> text; // get user input from the keyboard
// cout << "Your text is: " << text;
// string pattern;
// cout << "Type your pattern: "<<endl;
// cin >> pattern; // get user input from the keyboard
// cout << "Your name is: " << pattern;
    cout << "Text: " << text << endl;
    cout << "Pattern: " << pattern << endl;
   patternMatching(text, pattern);
    return 0;
}
