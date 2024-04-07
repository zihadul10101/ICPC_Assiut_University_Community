#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // it use find frequency
    unordered_map<int, int> ump;
    ump.insert(make_pair(7, 8));
    ump.insert(make_pair(4, 9));
    ump.insert(make_pair(6, 10));
    ump.insert(make_pair(1, 2));
    ump.insert(make_pair(2, 5));
    ump.insert(make_pair(3, 5));
    ump.insert(make_pair(5, 6));

    cout << "Multi Map size : " << ump.size() << endl;
    cout << "Unorderd Map Elements : " << endl;
    for (int i = 1; i <= ump.size(); i++)
    {
        cout << i << "-----" << ump[i] << " " << endl;
    }
    cout << endl;
    cout << "Unorderd Map use iterator Elements : " << endl;
    unordered_map<int, int>::iterator i;
    for (i = ump.begin(); i != ump.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;

    int arr[11]={1,2,1,2,3,4,6,4,6,4,3};
    unordered_map<int ,int > ump2;
    for (int i = 0; i < 11; i++)
    {
        ump2[arr[i]]++;
    }
       cout << endl;
       cout<<"Frequency in arry :"<<endl;
     for (i = ump2.begin(); i != ump2.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;
    
}