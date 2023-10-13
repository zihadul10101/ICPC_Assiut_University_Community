#include <bits/stdc++.h>
using namespace std;

void printEvenNum(int arr[],int size,int position){
  if(position > size - 1){
    	return;
	}
    // Debug information
  //  cout << "Position: " << position << ", Value: " << arr[position] << endl;	
	printEvenNum(arr,size,position+2);
	cout<<arr[position]<<" ";
}
int main() {
    int num;
	cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    
    }
        printEvenNum(arr,num,0);
	
}



// printEvenNum function step by step for the input array [1, 4, 2, 7], size = 4, and position = 0:

// Initial call: printEvenNum([1, 4, 2, 7], 4, 0)

// Since position = 0 is not greater than size - 1, the condition if (position > size - 1) is false.
// It calls printEvenNum([1, 4, 2, 7], 4, 2).
// Inside the recursive call: printEvenNum([1, 4, 2, 7], 4, 2)

// Again, position = 2 is not greater than size - 1, so the condition is false.
// It calls printEvenNum([1, 4, 2, 7], 4, 4).
// Inside the recursive call: printEvenNum([1, 4, 2, 7], 4, 4)

// Now, position = 4, which is equal to size - 1 (since size = 4). So, the condition is true, and the function returns without printing anything.
// Back to the previous call: printEvenNum([1, 4, 2, 7], 4, 2)


//Step	Position	Value at Position	Execution	Output
// 1	0	1	printEvenNum([1, 4, 2, 7], 4, 0)<br> - Condition: False<br> - Calls: printEvenNum([1, 4, 2, 7], 4, 2)	No output
// 2	2	2	printEvenNum([1, 4, 2, 7], 4, 2)<br> - Condition: False<br> - Calls: printEvenNum([1, 4, 2, 7], 4, 4)	No output
// 3	4	-	printEvenNum([1, 4, 2, 7], 4, 4)<br> - Condition: True<br> - Returns without printing	No output
// 4	2	2	Continuation of step 2	Prints "2 "
// 5	0	1	Continuation of step 1	Prints "1 "

// It returns to the previous recursive call, which was at position 2.
// The function continues execution and prints arr[position] where position = 2. arr[2] is 2, so it prints 2.
// Back to the initial call: printEvenNum([1, 4, 2, 7], 4, 0)

// The function returns to the initial call.
// It continues execution and prints arr[position] where position = 0. arr[0] is 1, so it prints 1.