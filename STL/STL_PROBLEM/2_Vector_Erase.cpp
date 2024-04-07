#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int pos;
    cin >> pos;
    int a, b;
    cin >> a >> b;
      vector<int>:: iterator p=v.begin()+pos-1;
      v.erase(p);
    vector<int>:: iterator lowbond, upbound;
    lowbond = v.begin() + a - 1;
    upbound = v.begin() + b - 1;
    v.erase(lowbond, upbound);
    cout << v.size() << endl;
    for (auto it : v)
    {
        cout << it <<" ";
    }

    return 0;
}