#include <bits/stdc++.h>
using namespace std;

int main() {
   string p;
   cin>>p;
   int flag=0;
   for(int i=0;i<p.length();i++){
    if((p[0] == 'H' || p[0] == 'Q' || p[0]=='9') || (p[i]=='H' || p[i] == 'Q' ||  p[i]=='9' || p[i]=='+' )){
      flag++;
    }
   }
   if(flag>0){
     cout << "YES" << endl; 
   }else{
       cout<<"NO"<<endl;
    }

    return 0;
}