#include <iostream>
using namespace std;

void findData(int arr[], int n, int s_data) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == s_data) {
           cout << "Data Found" <<"=" <<i<< endl;
           //cout << "Data Found"<< endl;
            found++;
            break;
        }
    }

    if (found == 0) {
        cout << "Data Not Found" << endl;
    }
}

int main() {
    int n, s_data;
    cin >> n;
    int arr[n];



    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> s_data;
    findData(arr, n, s_data);

    return 0;
}
