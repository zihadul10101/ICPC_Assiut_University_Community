#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;

  
    while (a <= b) // 4 <= 7 // 12 <=14 // 14>28
    {
     a *= 3;// 12 36
     b *= 2; // 14 28
    count++;//1+1
    }

    cout << count << endl;

    return 0;
}