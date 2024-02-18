#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
   cin>>s;
   // regffe    ['r','e','g','f','f','e']
	sort(s.begin(),s.end());
	// 012345

   int sLength=s.length();//5
   
 
	for(int i=0;i<sLength;i++){  // i = 3
		char c = s[i]; // e
		int counter = 1;
		while(s[i] == s[++i]){ // i = 2
			counter++; // 2
		}
		i--;  // i = 1
		cout<<c<<" : "<<counter<<endl;
		// i = 2
	}
    return 0;
}
