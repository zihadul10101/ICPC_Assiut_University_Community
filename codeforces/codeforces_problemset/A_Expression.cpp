#include <bits/stdc++.h>
using namespace std;

int main() {
int a,b,c,ans;
cin>>a>>b>>c;
 ans = a + b + c;
ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);

	cout << ans << endl;
// result1=a+(b*c);
// result2=a*(b+c);
// result3=a*b*c;
// result4=(a+b)*c;
// result5=(a+b+c);
// cout<<"r1"<<result1<<endl;
// cout<<"r2"<<result2<<endl;
// cout<<"r3"<<result3<<endl;
// cout<<"r4"<<result4<<endl;
// cout<<"r5"<<result5<<endl;
// if(result5>result1&&result5>result2&&result5>result3 && result5>result4){
//     cout<<result5<<endl;
//     break;
// }
// else if(result1>result2 && result1>result3 && result1>result4 && result1>result5){
// cout<<result1<<endl;
// }else if(result2>result1 && result2>result3 && result2>result4 && result2>result5){
// cout<<result2<<endl;
// }else if(result3>result1 && result3>result2 && result3>result4 && result3>result5){
// cout<<result3<<endl;
// }else {
// cout<<result4<<endl;
// }



    return 0;
}

