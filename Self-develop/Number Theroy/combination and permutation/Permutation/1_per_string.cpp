// #include <iostream>
// #include <algorithm>

// using namespace std;

// void permute(string str, int l, int r) {
//     if (l == r)
//         cout << str << endl;
//     else {
//         for (int i = l; i <= r; i++) {
//             swap(str[l], str[i]);
//             permute(str, l + 1, r);
//             swap(str[l], str[i]);
//         }
//     }
// }

// int main() {
//     string str = "abcd";
//     int n = str.size();
//     permute(str, 0, n - 1);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // string s;
    // cin>>s;
    // while(next_permutation(s.begin(),s.end())){
    //     cout<<s<<endl;
    // }
    vector<int>v;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    
     while(next_permutation(v.begin(),v.end())){
       print(v,n);
    }
}