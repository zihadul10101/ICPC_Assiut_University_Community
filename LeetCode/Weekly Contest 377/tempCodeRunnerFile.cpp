#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getArr(vector<int>& nums) {
    vector<int> arr;
    
    // Sort the input array in ascending order
    sort(nums.begin(), nums.end());
    
    // Perform rounds until nums becomes empty
    while (!nums.empty()) {
        // Alice removes the minimum element
        int aliceMove = nums.front();
        nums.erase(nums.begin());
        
        // Bob removes the minimum element
        int bobMove = nums.front();
        nums.erase(nums.begin());
        
        // Bob appends the removed element to arr
        arr.push_back(bobMove);
        
        // Alice appends the removed element to arr
        arr.push_back(aliceMove);
    }
    
    return arr;
}

int main() {
    vector<int> nums ;
    cout<<
    cin>>nums;
    
    vector<int> result = getArr(nums);
    
    // Print the resulting array arr
    cout << "Output: [";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}
