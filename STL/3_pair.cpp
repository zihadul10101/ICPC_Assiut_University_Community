#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pair<int, int> pr, pr1, pr2, pr3;
    // pr.first=1;
    // pr.second=2;

    pr = make_pair(1, 2);
    pr1 = make_pair(2, 5);
    pr2 = make_pair(3, 7);
    pr3 = make_pair(4, 20);
    cout << pr.first << "-----" << pr.second << endl;
    cout << pr1.first << "-----" << pr1.second << endl;
    cout << pr2.first << "-----" << pr2.second << endl;
    cout << pr3.first << "-----" << pr3.second << endl;
    pr.swap(pr3);
    cout << endl;
    cout << pr.first << "-----" << pr.second << endl;
    cout << pr1.first << "-----" << pr1.second << endl;
    cout << pr2.first << "-----" << pr2.second << endl;
    cout << pr3.first << "-----" << pr3.second << endl;
    // 2 4 10 3
    //After replace 
    // 10 3 2 4
    int arr[4]={2,4,10,3};
    cout<<"Array :";
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> vp;
      for (int i = 0; i < 4; i++)
    {
    vp.push_back(make_pair(i,arr[i]));
    }
    cout<<"Vector Pair : "<<endl;
       for (int i = 0; i < 4; i++)
    {
        cout<<vp[i].first<<"------"<<vp[i].second<<endl;
    }
    cout<<endl;

    
    return 0;
}