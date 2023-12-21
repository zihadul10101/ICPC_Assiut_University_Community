#include<bits/stdc++.h>
using namespace std;
int main(){
//      years = tot/365;
//    months = (tot%365)/30;
//    weeks = ((tot%365)%30)/7;
//    days = ((tot%365)%30)%7;
  
    int age,y,m,d;
	
	cin>>age;
	y=age/365;
	age=age%365;
	m=age/30;
	d=age%30;
	cout<<y<<" "<<"years"<<endl;
	cout<<m<<" "<<"months"<<endl;
	cout<<d<<" "<<"days"<<endl;

   // y=400/365=1 years
   // days=400%365=35
   // m=35/30=1 months
   // d=35%3=5 days

}