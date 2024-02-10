#include <iostream>
using namespace std;

void printSequence(int a, int b, int d) {
    for (int i = a; i <= b; i += d) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int a, b, d;
    cin >> a >> b >> d;
    printSequence(a, b, d);
    return 0;
}