#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
void solve(){
  long long  int a,b,c,d,count=0;
    cin>>a>>b>>c>>d;
if(a<b && a<c && a<d){
cout<<"3"<<endl;
}
else if((a>b && a<c && a<d) || (a<b && a>c && a<d) ||(a<b && a<c && a>d)){
 cout<<"2"<<endl;  
}
else if((a>b && a>c && a<d)||(a>b && a<c && a>d) || (a<b && a>c && a>d)){
 cout<<"1"<<endl;  
}else{
  cout<<"0"<<endl;
}

}
int main() {
int testCase;
cin>>testCase;

for(int j=0;j<testCase;j++){
  solve();   
}


    return 0;
}