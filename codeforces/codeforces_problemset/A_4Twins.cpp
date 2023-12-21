#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,sum1,count,sum2;
    while(cin>>n){//2
        long long a[n];
        sum1=0;
        for(i=0;i<n;i++){
            cin>>a[i];// 3 3
            sum1+=a[i]; // 3+3=9
        }
        sum1=sum1/2;// 9/2=4
        sort(a,a+n); // 3 3
        count=0;
        sum2=0;
        for(i=n-1;i>=0;i--){ // n=2
            sum2+=a[i];// 0+3+3
            count++;//1+1
            if(sum2>sum1) // 6>4
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}