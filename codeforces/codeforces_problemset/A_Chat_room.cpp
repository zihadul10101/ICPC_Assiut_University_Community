#include<iostream>
using namespace std;
int main ()
{
    string s,hello="hello";
    cin>>s;
    int j=0,count=0;
    for(int i=0;i<s.size();i++){
        if(
            s[i]==hello[j] ){
                j++;
                count++;
            }
    }
    if(count==5){
          cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl; 
    }
   
    return 0;
}