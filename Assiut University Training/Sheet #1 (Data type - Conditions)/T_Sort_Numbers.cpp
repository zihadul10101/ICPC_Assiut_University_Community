#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int a,b,c,max,min,def;
    cin>>a>>b>>c;
    
    if(a>=b&&a>=c){
max=a;
if(b>=c){
    def=b;
    min=c;
}else{
      def=c;
    min=b;
}
    }
    else if(b>=a&&b>=c){
        max=b;
        if(a>=c){
            def=a;
            min=c;
        }else{
          def=c;
            min=a;   
        }

    }
    else{
        max=c;
        if(a>=b){
            def=a;
            min=b;
        }else{
            def=b;
            min=a;  
        }
    }

    cout<<min<<"\n"<<def<<"\n"<<max<<"\n"<<endl;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
}