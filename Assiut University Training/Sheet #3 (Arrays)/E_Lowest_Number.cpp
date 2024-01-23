#include <iostream>
using namespace std;
 
int main() {
 int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0];
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
            minIndex = i;
        }
    }

    cout << min << " " << minIndex + 1 << endl;
 
    return 0;
}