#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // priority queue = max heap
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(8);
    pq.push(10);
    pq.push(6);
    pq.push(7);

    while (!pq.empty())
    {
        int top = pq.top();
        pq.pop();
        cout << top << " ";
    }
    cout << endl;
    cout << pq.size() << endl;

    return 0;
}