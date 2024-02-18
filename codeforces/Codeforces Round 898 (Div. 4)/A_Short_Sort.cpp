#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
int main(){
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        string name;
           int temp;
        cin>>name;
        if(name[0]=='a' && name[1]=='b' && name[2]=='c'){//abc
            cout<<"YES"<<endl;
        }
        else if(name[0]=='b' && name[1]=='a' && name[2]=='c'){//bac
        
          cout<<"YES"<<endl;
        }
        else if(name[0]=='c' && name[1]=='b' && name[2]=='a'){//cba
        
          cout<<"YES"<<endl;
        }
        else if(name[0]=='a' && name[1]=='c' && name[2]=='b'){//acb
        
          cout<<"YES"<<endl;
        }
         else{
            cout<<"NO"<<endl;
         }

    }
    return 0;
}