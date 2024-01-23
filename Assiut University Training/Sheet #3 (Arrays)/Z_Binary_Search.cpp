#include<bits/stdc++.h>
using namespace std;


void binary_Search(int arr[], int n, int s_arr[], int s_data) {
    for (int i = 0; i < s_data; i++) {
        int left = 0, right = n - 1, mid;
        int found = 0;

        while (left <= right) {
            mid = (left + right) / 2;

            if (s_arr[i] == arr[mid]) {
                cout << "found" << endl;
                found = 1;
                break;
            } else if (s_arr[i] > arr[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (found == 0) {
            cout << "not found" << endl;
        }
    }
}

int main() {
   long long int n, s_data;
    cin >> n >> s_data;
    int arr[n]; // Dynamic memory allocation
    int s_arr[s_data];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < s_data; i++) {
        cin >> s_arr[i];
    }

    binary_Search(arr, n, s_arr, s_data);

    return 0;
}





//Step left right	mid	search	arr[mid]	Action/Comment
// 1	0	4	2	5	4	arr[mid] < search
// 2	3	4	3	5	3	arr[mid] == search
// 3	-	-	-	-	-	End of search (5)
// 4	0	4	2	3	4	arr[mid] > search
// 5	0	1	0	3	1	arr[mid] < search
// 6	1	1	1	3	5	arr[mid] > search
// 7	1	0	0	3	-	Search range exhausted
// 8	-	-	-	-	-	End of search (3)
// 9	0	4	2	6	4	arr[mid] < search
// 10	3	4	3	6	3	arr[mid] < search
// 11	4	4	4	6	-	Search range exhausted

