#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<int> q; //first in first out
    q.push(10);
    q.push(2);
    q.push(9);
    q.push(11);
    cout<<"First element "<<q.front()<<endl;
    cout<<"Last element "<<q.back()<<endl;
    cout<<"size "<<q.size()<<endl;
    cout<<"empty "<<q.empty()<<endl;
    while(!q.empty()){
        int first_element = q.front();
        cout<<first_element<<" ";
        q.pop();
    }
    cout<<endl;
     cout<<"After size "<<q.size()<<endl;
    return 0;
}