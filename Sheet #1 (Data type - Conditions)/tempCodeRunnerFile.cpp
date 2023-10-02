#include<bits/stdc++.h>
using namespace std;
int main(){
//      years = tot/365;
//    months = (tot%365)/30;
//    weeks = ((tot%365)%30)/7;
//    days = ((tot%365)%30)%7;
    long long tot,year,month,days;
    cin>>tot;
    year=tot/365;
    month=(tot%365)/30;
    days = ((tot%365)%30)%7;
    cout<<year<<" " <<"years"<<endl;
    cout<<month <<" "<<"months"<<endl;
    cout<<days<<" " <<"days"<<endl;
}