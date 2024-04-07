#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    v.push_back(6);
    v.push_back(2);
    v.push_back(5);
    v.push_back(10);
    
    cout << "vector element :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "vector pop element :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    cout << "vector sort element :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> v2(3, 4);

    cout << "Before swap\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    swap(v2, v);
    cout << "After swap\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    cout << "reverse vector" << endl;
    reverse(v2.begin(), v2.end());
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    vector<bool> v3;
    v3.push_back(true);
    v3.push_back(false);
    v3.push_back(true);
    v3.push_back(true);
    cout << "Boolean element in vector" << endl;
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    v3.flip();
    cout << "Boolean flip element in vector" << endl;
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    vector<string> st;
    st.push_back("jihad");
    st.push_back("aihad");
    st.push_back("zihad");
    st.push_back("bihad");
    cout << "String element in vector" << endl;
    for (int i = 0; i < st.size(); i++)
    {
        cout << st[i] << " ";
    }

    return 0;
}