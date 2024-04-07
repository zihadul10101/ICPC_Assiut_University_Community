#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    multiset<int> ms;
    ms.insert(10);
    ms.insert(6);
    ms.insert(7);
    ms.insert(9);
    ms.insert(10);
    ms.insert(5);
    ms.insert(6);
    ms.insert(7);
    ms.insert(7);
    ms.insert(10);
    cout << "Size of SET :" << ms.size() << endl;
    multiset<int>::iterator i;
    for (i = ms.begin(); i != ms.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    set<int>::iterator f;
    f = ms.find(7);
    ms.erase(f);
    cout << "erase element :" << endl;
    for (i = ms.begin(); i != ms.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
      // remove 7 to 20 element
    cout << "remove 7 to 20 element" << endl;
    set<int>::iterator lowbond, upbond;
    lowbond = ms.lower_bound(7);
    upbond = ms.upper_bound(10);
    ms.erase(lowbond, upbond);
    for (i = ms.begin(); i != ms.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}