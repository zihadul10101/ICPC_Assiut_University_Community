#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, m, k,x;
  cin >> n >> m >> k;
  set<int> a, b;
  vector<int> v1(n), v2(m);
  for (int i = 0; i < n;i++){
    cin >> v1[i];
  }
  for (int i = 0; i < m;i++){
    cin >> v2[i];
  }
  for (int i = 0; i < n;i++){
    if(v1[i]<=k)
      a.insert(v1[i]);
  }
   for (int i = 0; i < m;i++){
    if(v2[i]<=k)
      b.insert(v2[i]);
  }
  int both = 0, counta = 0, countb = 0;
  for (int i = 1; i <= k;i++){
    if(a.count(i) && b.count(i) ){
      both++;
    }
    else if(a.count(i)){
      counta++;
    }
    else if(b.count(i)){
      countb++;
  }
  else {
    cout << "NO" << endl;
    return;
  }
  }
  if(counta+both>=(k/2) && countb+both>=(k/2)){
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}
int main()
{
 
 ios_base::sync_with_stdio(false);
 

int T;
cin >> T;

while (T--)
{
  solve();
  }
    return 0;
}

  