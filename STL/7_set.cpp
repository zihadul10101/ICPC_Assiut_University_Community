#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> s; // s= 5 6 7 9 10 5 6 7 9 10 = output = 5 6 7 9 10 =size 5
    s.insert(10);
    s.insert(6);
    s.insert(7);
    s.insert(9);
    s.insert(10);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(7);
    s.insert(10);
    cout << "Size of SET" << s.size() << endl;
    set<int>::iterator i;
    for (i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    set<int>::iterator f;
    f = s.find(9);
    s.erase(f);
    cout << "erase element :" << endl;
    for (i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    s.insert(17);
    s.insert(20);
    s.insert(30);
    s.insert(2);
    cout << "Inserting new element :" << endl;
    for (i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    // remove 7 to 20 element
    cout << "remove 7 to 20 element" << endl;
    set<int>::iterator lowbond, upbond;
    lowbond = s.lower_bound(7);
    upbond = s.upper_bound(20);
    s.erase(lowbond, upbond);
    for (i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // Desanding order
    cout << "Desanding order " << endl;
    set<int, greater<int>> s2;
    s2.insert(12);
    s2.insert(4);
    s2.insert(70);
    s2.insert(100);
    s2.insert(10);
      for (i = s2.begin(); i != s2.end(); i++)
    {
        cout << *i << " ";
    }
    cout<<endl;
}