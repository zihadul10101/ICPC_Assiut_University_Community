#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, even = 0, odd = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                even++;
               // cout << "even number " << n << endl;
            } else {
                odd++;
                //cout << "odd number " << n << endl;
            }
        }
      
        cout<<odd<<even<<endl;
    }
    return 0;
}
