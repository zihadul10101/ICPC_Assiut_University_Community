#include<bits/stdc++.h>
using namespace std;

void n_time(int num,char ch){
	
 for(int i=0;i<num;i++){
    cout<<ch<<" ";
 }
  cout<<endl;
}
int main(){
	int size;
	cin>>size;

   while(size--){
    int num;
    char ch;
    cin>>num>>ch;
    n_time(num,ch);
   }
 
      
    

}