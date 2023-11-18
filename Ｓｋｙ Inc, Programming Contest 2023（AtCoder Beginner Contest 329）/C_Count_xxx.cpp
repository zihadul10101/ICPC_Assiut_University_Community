#include<bits/stdc++.h>
using namespace std;

// Function to print all distinct substrings of repeated characters and count occurrences
void countRepeatingSubstrings(char str[], int n) 
{
    int count = 0; // Variable to store the count of distinct repeating substrings

    // Pick starting point
    for (int len = 1; len <= n; len++) 
    { 
        // Pick ending point
        for (int i = 0; i <= n - len; i++) 
        {
            // Check if characters in the current substring are the same
            int j = i + len - 1;
            bool isRepeated = true;
            for (int k = i + 1; k <= j; k++) 
            {
                if (str[k] != str[i]) {
                    isRepeated = false;
                    break;
                }
            }

            // If all characters are the same, it's a distinct repeating substring
            if (isRepeated) {
                cout << str + i << endl;
                count++;
            }
        }
    }

    // Print the count of distinct repeating substrings
    cout << "Count of distinct repeating substrings: " << count << endl;
}

// Driver program to test above function
int main() 
{
    char str[] = "aaabaa";
    countRepeatingSubstrings(str, strlen(str));
    return 0;
}
