#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // pair(index,value) (1,2) (2,1) (3,2) (1,3),(2,4),(3,6)
    multimap<int, int> mmp;
    mmp.insert(make_pair(1, 2));
    mmp.insert(make_pair(2, 1));
    mmp.insert(make_pair(3, 2));
    mmp.insert(make_pair(1, 3));
    mmp.insert(make_pair(2, 4));
    mmp.insert(make_pair(3, 6));
    cout << "Multi Map size : " << mmp.size() << endl;
    multimap<int, int>::iterator i;
    cout << "Multi map element : " << endl;
    for (i = mmp.begin(); i != mmp.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;
    // erase mmp.erase(3) delete in 3 type element
    mmp.erase(3);
    cout << "erase all index element : " << endl;
    for (i = mmp.begin(); i != mmp.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;
    // mmp.erase(mmp.find(3)) just delete 1 element
    mmp.erase(mmp.find(2));
    cout << "erase one index element : " << endl;
    for (i = mmp.begin(); i != mmp.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;

   mmp.insert(make_pair(5, 42));
   mmp.insert(make_pair(5, 60));
   mmp.insert(make_pair(6, 55));
   mmp.insert(make_pair(7, 28));
      cout << "Multi map insert element : " << endl;
    for (i = mmp.begin(); i != mmp.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;
     // remove 7 to 20 element
    cout << "remove 4 to 7 element" << endl;
    map<int, int>::iterator lowbond, upbond;
    lowbond =mmp.lower_bound(4);
    upbond =mmp.upper_bound(7);
   mmp.erase(lowbond, upbond);
    for (i =mmp.begin(); i !=mmp.end(); i++)
    {
        cout << i->first << "----" << i->second << endl;
    }
    cout << endl;
      mmp.clear();
    cout<<"Use clear function :"<<mmp.size()<<endl;
}