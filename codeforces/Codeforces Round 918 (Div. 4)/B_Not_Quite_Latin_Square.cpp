#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"

void replacedLetter()
{
    char sq[3][3];
    int flag1 = 0, flag2 = 0, flag3 = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> sq[i][j];
            if (sq[i][j] == 'A')
            {
                flag1++;
            }
            else if (sq[i][j] == 'B')
            {
                flag2++;
            }
            else if (sq[i][j] == 'C')
            {
                flag3++;
            }
        }
    }

    // check value
    //             0 1 2
    // ch[i][j] =0 A B C  // flag1=2  print A
    //           1 C ? B   //
    //           2 A B C
    //    3
    // ABC
    // C?B A
    // BCA
    // BCA
    // CA? B
    // ABC
    // ?AB C
    // BCA
    // ABC

    if (flag1 == 2)
    {
        cout << "A" << endl;
    }
    else if (flag2 == 2)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "C" << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    for (int k = 0; k < n; k++)
    {

        replacedLetter();
    }

    return 0;
}
