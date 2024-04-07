#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> s; // Last in first out
    s.push(2);
    s.push(5);
    s.push(1);
    s.push(4);
    s.push(6);
  cout<<"Stack element :"<<s.size()<<endl;
  while (!s.empty())
  {
    int top = s.top();
    s.pop();
    cout<<top<<" ";
  }
  cout<<endl;
  

    return 0;
}