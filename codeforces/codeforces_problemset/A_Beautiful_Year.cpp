#include <iostream>
using namespace std;

// Function to check if a number has distinct digits
bool hasDistinctDigits(int num) {
    bool digitUsed[10] = {false};

    while (num > 0) {
        int digit = num % 10;
        if (digitUsed[digit]) {
            return false;
        }
        digitUsed[digit] = true;
        num /= 10;
    }

    return true;
}

// Function to find the next number with distinct digits
void nextNumberDistinctDigit(int n) {
    while (!hasDistinctDigits(++n));
        

    cout << n << endl;
}

int main() {
    int n; // input the no.
    cin >> n;
    // string s;
    // while(1){
    //     n++;
    //     s=to_string(n);
    //     set<char>st;
    //     for(int i=0;i<4;i++){
    //         st.insert(s[i]);
    //     }
    //     if(st.size()==4){
    //         break;
    //     }else{
    //         n=stoi(s);// string to int =stoi
    //     }
    // }
    // cout<<s<<endl;
    // Function Call
    nextNumberDistinctDigit(n);

    return 0;
}
