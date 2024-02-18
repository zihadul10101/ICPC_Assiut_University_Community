#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int visited[n];

    for(int i=0; i<n; i++)
    {
        if(visited[i]!=1)
        {
           int count = 1;
           for(int j=i+1; j<n; j++)
            {
              if(arr[i]==arr[j])
              {
                 count++;
                 visited[j]=1;
              }
            }
     
  
      cout<<count<<endl;
    
          
        }
     }

    return 0; 
}

// #include <bits/stdc++.h>
// using namespace std;

// int countFrequency(int *arr, int n, int counter) {
//     for (int i = 0; i < n; i++) {
//         int flag = 0;

//         // Check if the current element is already encountered
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 1)
//             continue;

//         // Count the frequency of the current element
//         int count = 0;
//         for (int j = 0; j < n; j++) {
//             if (arr[i] == arr[j])
//                 count += 1;
//         }

//         // Print the count only if it is greater than the specified counter
//         // if (count > counter)
//             cout << count << endl;
//     }
// }

// int main() {
//     int size, counter;
//     cin >> size >> counter;

//     int arr[size];

//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     countFrequency(arr, size, counter);

//     return 0;
// }

