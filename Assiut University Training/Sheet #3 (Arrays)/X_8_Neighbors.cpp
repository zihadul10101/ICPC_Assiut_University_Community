// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int row,column;
// 	cin>>row>>column;
// 	char arr[101][101];  //   0 0 0 0 0 0 0 0 0 0
// 	for(int i=1;i<=row;i++){
// 		for(int z=1;z<=column;z++){
// 			cin>>arr[i][z];
// 		}
// 	}
// 	int rowIn,columnIn;
// 	cin>>rowIn>>columnIn;
// 	if(arr[rowIn][columnIn-1] != '.' &&
// 	   arr[rowIn][columnIn+1] != '.' &&
// 	   arr[rowIn - 1][columnIn] != '.' &&
// 	   arr[rowIn + 1][columnIn] != '.' &&
// 	   arr[rowIn - 1][columnIn - 1] != '.' &&
// 	   arr[rowIn - 1][columnIn + 1] != '.' &&
// 	   arr[rowIn + 1][columnIn - 1] != '.' &&
// 	   arr[rowIn + 1][columnIn + 1] != '.'){
// 		cout<<"yes";
// 	} else {
// 		cout<<"no";
// 	}
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, column;
    cin >> row >> column;
    char arr[101][101];

    // Input grid
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }

    int rowIn, columnIn;
    cin >> rowIn >> columnIn;

    // Adjust indices to 0-indexed
    rowIn--;
    columnIn--;

    // Debugging output to print the surrounding characters
    cout << "Surrounding characters:" << endl;
    cout << arr[rowIn][columnIn - 1] << arr[rowIn][columnIn + 1] << endl;
    cout << arr[rowIn - 1][columnIn] << arr[rowIn + 1][columnIn] << endl;
    cout << arr[rowIn - 1][columnIn - 1] << arr[rowIn - 1][columnIn + 1] << endl;
    cout << arr[rowIn + 1][columnIn - 1] << arr[rowIn + 1][columnIn + 1] << endl;

    if (arr[rowIn][columnIn - 1] == 'x' &&
        arr[rowIn][columnIn + 1] == 'x' &&
        arr[rowIn - 1][columnIn] == 'x' &&
        arr[rowIn + 1][columnIn] == 'x' &&
        arr[rowIn - 1][columnIn - 1] == 'x' &&
        arr[rowIn - 1][columnIn + 1] == 'x' &&
        arr[rowIn + 1][columnIn - 1] == 'x' &&
        arr[rowIn + 1][columnIn + 1] == 'x') {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}

