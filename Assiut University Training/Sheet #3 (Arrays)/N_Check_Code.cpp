#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int d = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '-') {
            d++; // Counting non-'-' characters in the string.
        }
    }
    
    // Check if the character at position 'a' is '-' and if the count of non-'-' characters is equal to 'a + b'.
    if (s[a] == '-' && d == a + b) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}



// Step Variables	a	b	s	i	d	Condition	Output
// 1	Initialization	3	3	"269-665"	-	0	-	-
// 2	Input	3	3	"269-665"	-	0	-	-
// 3	Loop Start	3	3	"269-665"	0	0	-	-
// 4	Loop Iteration	3	3	"269-665"	0	0	s[0] != '-' (true)	-
// d++	
// 5	Loop Iteration	3	3	"269-665"	1	1	s[1] != '-' (true)	-
// d++	
// 6	Loop Iteration	3	3	"269-665"	2	2	s[2] != '-' (true)	-
// d++	
// 7	Loop Iteration	3	3	"269-665"	3	3	s[3] != '-' (false)	-
// 8	Condition Check	3	3	"269-665"	3	3	s[3] == '-' (true)	-
// d == a + b (true)	-
// 9	Output "Yes"	3	3	"269-665"	3	3	-	"Yes"


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int num1,num2; // 3 3
// 	cin>>num1>>num2;
// 	string code; // code = "26$-665"
// 	//              0   1   2   3   4   5   6 
// 	//        code['2','6','9','-','6','6','5']
// 	// 0 1 2 3 4 5 6 7 8 9
//   //  '0' '1' .......... '9'
//   //  '0'  '1'  '2'  '3'  '4'  '5'  '6'  '7'  '8'  '9' 
//   //  48 49 50 51 52 53 54 55 56 57
// 	cin>>code;
// 	if(num1+num2+1 != code.size()){
// 		cout<<"No"<<endl;
// 		return 0;
// 	}
// 	if(code[num1] != '-'){
// 		cout<<"No"<<endl;
// 		return 0;
// 	}
// 	int counter = 0;
// 	for(int i=0;i<code.size();i++){
// 		if(code[i] >= 48 && code[i] <=57 && i != num1){
// 			counter++; // 6
// 		}
// 	}
// 	if(counter == num1+num2){
// 		cout<<"Yes"<<endl;
// 	} else {
// 		cout<<"No"<<endl;
// 	}
	
// }
