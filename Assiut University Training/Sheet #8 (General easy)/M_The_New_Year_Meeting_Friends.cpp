#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int p1 = abs(a - b) + abs(a - c);
    int p2 = abs(b - a) + abs(b - c);
    int p3 = abs(c - a) + abs(c - b);
    // cout<<p1<<endl;
    // cout<<p2<<endl;
    // cout<<p3<<endl;
    int res = min(p1, min(p2, p3));
    cout << res << endl;
    //    if(p1< p2 && p1<p3){
    //     cout<<p1<<endl;
    //    }
    //    else if(p2< p1 && p2<p3){
    //   cout<<p2<<endl;
    //    }else{
    //     cout<<p3<<endl;
    //    }

    return 0;
}