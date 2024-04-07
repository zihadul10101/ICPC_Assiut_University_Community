#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // pair(index,value) (1,3) (2,6) (3,5) (4,8)
    map<int, int> mp;
    // mp[1]=3;
    // mp[2]=6;
    // mp[3]=5;
    // mp[4]=8;

    cout << "Map size :" << mp.size() << endl;
    mp.insert(make_pair(1, 3));
    mp.insert(make_pair(2, 6));
    mp.insert(make_pair(3, 5));
    mp.insert(make_pair(4, 8));
    cout << "Map Elements : ";
    for (int i = 1; i <= mp.size(); i++)
    {
        cout << mp[i] << " ";
    }
    cout << endl;
    map<int, int>::iterator i;
    for (i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;
    // erase element : mp.erase(index)
    mp.erase(3); //
    for (i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;
    mp.insert(make_pair(5, 42));
    mp.insert(make_pair(6, 60));
    mp.insert(make_pair(8, 55));
    mp.insert(make_pair(10, 28));
    cout << "Insert new element :" << endl;
    for (i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;
    // remove 7 to 20 element
    cout << "remove 7 to 20 element" << endl;
    map<int, int>::iterator lowbond, upbond;
    lowbond = mp.lower_bound(7);
    upbond = mp.upper_bound(10);
    mp.erase(lowbond, upbond);
    for (i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;
    mp.clear();
    cout<<"Use clear function :"<<mp.size()<<endl;
}