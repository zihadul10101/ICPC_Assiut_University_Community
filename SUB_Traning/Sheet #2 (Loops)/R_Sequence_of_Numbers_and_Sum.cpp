#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    
    while ( cin >> a >> b)
    {
         long long sum=0;
         	 int min=0,max=0;
           if(a<=0 || b<=0){
			return 0;
		}
          if(a >= b){
			max = a;
			min = b;
		} else {
			max = b;
			min = a;
		}
       for(int i=min;i<=max;i++){
			cout<<i<<" ";
			sum+=i;
		}
        	cout<<"sum ="<<sum<<endl;
    }

    return 0;
}