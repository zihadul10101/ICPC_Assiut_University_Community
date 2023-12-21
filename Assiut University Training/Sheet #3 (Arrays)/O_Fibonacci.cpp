// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	long long position; // 5
// 	cin>>position;
// 	long long  start = 0;
// 	long long  sec = 1;
// 	if(position == 1){
// 		cout<<start<<endl;
// 	}
//      else if(position == 2){
// 		cout<<sec<<endl;
// 	} else {
// 		for(int i=3;i<=position;i++){
// 			long long  res = start + sec;
// 			start = sec;
// 			sec = res;
// 		}
// 		cout<<sec<<endl;
// 	}
	
	
// }


// find febo sec Recursive Approach
// #include <iostream>

// // Recursive function to calculate the nth Fibonacci number
// long long fibonacci(int n) {
//     if (n <= 0) return 0;
//     if (n == 1) return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n; // Number of terms in the sequence
//     std::cout << "Enter the number of terms in the Fibonacci sequence: ";
//     std::cin >> n;

//     std::cout << "Fibonacci Sequence up to " << n << " terms: ";
//     for (int i = 0; i < n; i++) {
//         std::cout << fibonacci(i) << " ";
//     }

//     return 0;
// }
// Iterative Approach:
// #include <iostream>

// int main() {
//     int n; // Number of terms in the sequence
//     std::cout << "Enter the number of terms in the Fibonacci sequence: ";
//     std::cin >> n;

//     long long first = 0, second = 1;

//     std::cout << "Fibonacci Sequence up to " << n << " terms: ";
//     std::cout << first << " " << second << " "; // First two terms are 0 and 1

//     for (int i = 2; i < n; i++) {
//         long long next = first + second;
//         std::cout << next << " ";
//         first = second;
//         second = next;
//     }

//     return 0;
// }


// Here's a C++ program to calculate the golden ratio using the Fibonacci sequence:
#include <iostream>

int main() {
    int n; // Number of terms in the Fibonacci sequence
    std::cout << "Enter the number of terms in the Fibonacci sequence: ";
    std::cin >> n;

    double prev = 0.0; // Initialize the first Fibonacci number
    double current = 1.0; // Initialize the second Fibonacci number

    for (int i = 2; i <= n; i++) {
        double next = prev + current;
        prev = current;
        current = next;
    }

    // Calculate the golden ratio as the ratio of current and previous Fibonacci numbers
    double goldenRatio = current / prev;

    std::cout << "Approximate Golden Ratio after " << n << " terms: " << goldenRatio << std::endl;

    return 0;
}

// find Fibonacci Day in cpp

// #include <iostream>

// // Function to calculate the nth Fibonacci number
// unsigned long long fibonacci(int n) {
//     if (n <= 0) return 0;
//     if (n == 1) return 1;
//     unsigned long long a = 0, b = 1, c;
//     for (int i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }

// int main() {
//     unsigned long long date; // Date (day of the month)
//     std::cout << "Enter a date (day of the month): ";
//     std::cin >> date;

//     int n = 0;
//     while (fibonacci(n) < date) {
//         n++;
//     }

//     if (fibonacci(n) == date) {
//         std::cout << "Fibonacci Day! " << date << " is the " << n << "th Fibonacci number." << std::endl;
//     } else {
//         std::cout << date << " is not a Fibonacci Day." << std::endl;
//     }

//     return 0;
// }

// find Fibonacci Words in cpp
// #include <iostream>
// #include <string>
// #include <vector>

// // Function to generate Fibonacci words up to n terms
// void generateFibonacciWords(int n) {
//     std::vector<std::string> fibonacciWords;

//     // Initial Fibonacci words
//     std::string word1 = "A";
//     std::string word2 = "B";

//     fibonacciWords.push_back(word1);
//     fibonacciWords.push_back(word2);

//     // Generate Fibonacci words
//     for (int i = 2; i < n; i++) {
//         std::string nextWord = word1 + word2;
//         fibonacciWords.push_back(nextWord);
//         word1 = word2;
//         word2 = nextWord;
//     }

//     // Print Fibonacci words
//     std::cout << "Fibonacci Words up to " << n << " terms:" << std::endl;
//     for (const std::string& word : fibonacciWords) {
//         std::cout << word << " ";
//     }
//     std::cout << std::endl;
// }

// int main() {
//     int n; // Number of Fibonacci words to generate
//     std::cout << "Enter the number of Fibonacci words to generate: ";
//     std::cin >> n;

//     if (n >= 1) {
//         generateFibonacciWords(n);
//     } else {
//         std::cout << "Invalid input. Please enter a positive integer." << std::endl;
//     }

//     return 0;
// }
// Enter the number of Fibonacci words to generate: 5
// Fibonacci Words up to 5 terms:
// I
// have
// I have
// have I have
// I have have I have


// find Lucas Numbers with fibonacci sequence in cpp
// L(0) = 2
// L(1) = 1
// L(n) = L(n-1) + L(n-2) for n > 1


// #include <iostream>

// // Function to calculate the nth Lucas number
// unsigned long long lucas(int n) {
//     if (n == 0) return 2;
//     if (n == 1) return 1;
    
//     unsigned long long a = 2; // L(0)
//     unsigned long long b = 1; // L(1)
//     unsigned long long c;

//     for (int i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return b;
// }

// int main() {
//     int n; // The position of the Lucas number to find
//     std::cout << "Enter the position of the Lucas number to find: ";
//     std::cin >> n;

//     if (n < 0) {
//         std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
//         return 1; // Exit with an error code
//     }

//     unsigned long long result = lucas(n);
//     std::cout << "The " << n << "th Lucas number is: " << result << std::endl;

//     return 0;
// }
