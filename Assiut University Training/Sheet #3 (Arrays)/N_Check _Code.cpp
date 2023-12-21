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

