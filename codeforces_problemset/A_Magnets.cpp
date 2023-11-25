#include<bits/stdc++.h>
using namespace std;
int main()
{ 

    int n,flag=1;
    cin>>n;
    int magnat[n];
    for(int i=0;i<n;i++){
        cin>>magnat[i];
    }
     for(int i=0;i<n-1;i++){
       if(magnat[i] != magnat[i+1]){
       flag++;
       }
    }

cout<<flag<<endl;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main()
{ 
 
    int n,flag=0;
    cin>>n;
    int magnat[n];
    for(int i=0;i<n;i++){
        cin>>magnat[i];
    }
     for(int i=0;i<n;i++){
       if(magnat[i] != magnat[i+1]){
       flag++;
       }
    }
 
cout<<flag<<endl;
    return 0;
}