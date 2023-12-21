#include <bits/stdc++.h>
using namespace std;

long long calculateSuffixSum(int size, int lastNumber, long long arr[]) {//5 ,3 , 1 8 2 10 3
    if (lastNumber == 0) {
        return 0;
    }
    return arr[size - 1] + calculateSuffixSum(size - 1, lastNumber - 1, arr);
    // 3+10+2      // 2,last number=0,arr
}

int main() {
    int size, lastNumber;// 5 3
    cin >> size >> lastNumber;

    long long arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        //1 8 2 10 3
    }

    long long result = calculateSuffixSum(size, lastNumber, arr);//5 ,3 , 1 8 2 10 3
    cout << result << endl;

    return 0;
}
