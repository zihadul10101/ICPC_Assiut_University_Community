#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"

void replacedLetter()
{
    string ch;
    int size;
   cin>>size;
    for (int i = 0; i < size; i++)
    {
     cin>>ch[i];
    if(i > 1 && (ch[i + 1] == 'a' || ch[i + 1] == 'e'))
            {
                cout << '.';
            }
            cout << ch[i];
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    for (int k = 0; k < n; k++)
    {

        replacedLetter();
    }

    return 0;
}
