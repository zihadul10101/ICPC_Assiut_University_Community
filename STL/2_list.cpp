#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> l;
    l.push_back(20);
    l.push_back(10);
    l.push_back(3);
    l.push_back(4);
    l.push_front(66);
    list<int>::iterator i;
    for (i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    i = l.begin();
    advance(i, 2);
    l.insert(i, 4);
    for (i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << "First element of list :" << l.front() << endl;
    cout << "Lat element of list :" << l.back() << endl;
    l.sort();
    for (i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    l.pop_front();
       for (i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    l.pop_back();
          for (i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}