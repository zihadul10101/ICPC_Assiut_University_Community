#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // Print the top half of the diamond
      for (int row= 1; row<= n; row++) {
         for (int col= 1; col<= n - row; col++) {
          cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * row- 1; k++) {
          cout << "*";
        }
          cout << endl;
          
      }

       // Print the bottom half of the diamond
    for (int row= n ; row>= 1; row--) {
        // Print spaces
        for (int col= 1; col<= n - row; col++) {
            cout << " ";
        }
        
        // Print stars
        for (int k = 1; k <= 2 * row- 1; k++) {
            cout << "*";
        }
        
        cout << endl;
    }
}


// ----------------------------------------------------
// |     row     |       col (leading spaces)       |    *
// ----------------------------------------------------
// |      1      |             4                     |    1
// |      2      |           3 3                    |    3
// |      3      |          2 2 2                   |    5
// |      4      |         1 1 1 1                  |    7
// |      5      |        0 0 0 0 0                 |    9
// |      4      |         1 1 1 1                  |    7
// |      3      |          2 2 2                   |    5
// |      2      |           3 3                    |    3
// |      1      |             4                     |    1
// ----------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int lines;
// 	cin>>lines;
// 	int spaces1 = lines - 1; // 3
// 	for(int i=1;i<=lines;i++){
// 		for(int z=1;z<=spaces1;z++){
// 			cout<<" ";
// 		}
// 		for(int x =1;x<i*2;x++){ // x = 1  i = 3    x<6  1 2 3 4 5
// 			cout<<"*";
// 		}
// 		cout<<endl;
// 		spaces1--;
// 	}
// 	spaces1 = 1;
// 	for(int i=lines;i>=1;i--){ // 4 3 2 1
// 		for(int z=1;z<spaces1;z++){ // z=1 z<4
// 			cout<<" ";
// 		}
// 		for(int x =i*2;x>1;x--){ // x = 8   8>1   * 8 7 6 5 4 3 2
// 			cout<<"*";
// 		}
// 		cout<<endl;
// 		spaces1++;
// 	}
	
// }
