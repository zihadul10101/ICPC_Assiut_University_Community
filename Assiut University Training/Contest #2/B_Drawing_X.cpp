#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter; // 5
	cin>>counter;
	// for(int i=0;i<counter;i++){ //  i = 0
	// 	for(int z=0;z<counter;z++){ // z = 0
	// 		if(i == z && i != counter/2 && z != counter/2){
	// 			cout<<"\\";
	// 		} else if (i == counter/2 && z == counter/2){
	// 			cout<<"X";
	// 		} else if(z != counter/2 && i == ((counter-1)-z)){
	// 			cout<<"/";
	// 		} else {
	// 			cout<<"*";
	// 		}
	// 	}
	// 	cout<<endl;
	// }
	for(int i=0;i<counter;i++){
		for(int j=0;j<counter;j++){
		
			if(i==j && i!=counter/2 && j!= counter/2){
				cout<<"\\";
			}else if(i==counter/2 && j== counter/2){
				cout<<"X";
			}
			else if(j!= counter/2 && i==((counter-1)-j)){
				cout<<"/";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
		
}

// \***/
// *\*/*
// **X**
// */*\*
// /***\
// | i   | z   | counter | Condition Check | Output |
// | --- | --- | ------- | ---------------- | ------ |
// | 0   | 0   | 5       | i == z           | \      |
// | 0   | 1   | 5       | i != counter/2 && z != counter/2 | *  |
// | 0   | 2   | 5       | i != counter/2 && z != counter/2 | *  |
// | 0   | 3   | 5       | i != counter/2 && z != counter/2 | *  |
// | 0   | 4   | 5       | i != counter/2 && z != counter/2 | *  |
// | 1   | 0   | 5       | i != counter/2 && z != counter/2 | *  |
// | 1   | 1   | 5       | i == counter/2 && z == counter/2 | X  |
// | 1   | 2   | 5       | i != counter/2 && z != counter/2 | *  |
// | 1   | 3   | 5       | i != counter/2 && z != counter/2 | *  |
// | 1   | 4   | 5       | i != counter/2 && z != counter/2 | *  |
// | 2   | 0   | 5       | i != counter/2 && z != counter/2 | *  |
// | 2   | 1   | 5       | i != counter/2 && z != counter/2 | *  |
// | 2   | 2   | 5       | i != counter/2 && z != counter/2 | \  |
// | 2   | 3   | 5       | i != counter/2 && z != counter/2 | *  |
// | 2   | 4   | 5       | i != counter/2 && z != counter/2 | *  |
// | 3   | 0   | 5       | i != counter/2 && z != counter/2 | *  |
// | 3   | 1   | 5       | i != counter/2 && z != counter/2 | *  |
// | 3   | 2   | 5       | i != counter/2 && z != counter/2 | *  |
// | 3   | 3   | 5       | i == counter/2 && z == counter/2 | X  |
// | 3   | 4   | 5       | i != counter/2 && z != counter/2 | *  |
// | 4   | 0   | 5       | i != counter/2 && z != counter/2 | *  |
// | 4   | 1   | 5       | i != counter/2 && z != counter/2 | *  |
// | 4   | 2   | 5       | i != counter/2 && z != counter/2 | /  |
// | 4   | 3   | 5       | i != counter/2 && z != counter/2 | *  |
// | 4   | 4   | 5       | i != counter/2 && z != counter/2 | *  |
