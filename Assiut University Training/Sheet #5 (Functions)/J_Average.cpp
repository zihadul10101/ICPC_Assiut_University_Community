#include<bits/stdc++.h>
using namespace std;
double sum(int size){
	double sum=0;
	for(int i=0;i<size;i++){ // 0 1 2
		double value[size];
		cin>>value[i];
		sum+= value[i];
	}
	return sum;
}
int main()
{
	int size;
	cin>>size;
	cout<<setprecision(8)<<sum(size)/size<<endl;
}