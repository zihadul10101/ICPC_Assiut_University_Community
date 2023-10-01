#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int left,int right,int search)
{
  while(left<=right)
  {
    int mid=left+(right-left)/2;
    if(arr[mid]==search)
    {
      return mid;
    }
    else if(arr[mid]<search){
      left=mid+1;
    }
    else{
      right=mid-1;
    }
  }
  return -1;
}
int main(){
      int size, numSearch;
    cin >> size >>numSearch;
    int arr[size];
      // Reading input elements
    for (int i = 0; i < size; ++i) {
            cin >> arr[i];
    }
      sort(arr,arr+size);
      while(numSearch--){ // 3    3 2 1
	  int search;
		cin>>search;
    int result = binarySearch(arr,0,size-1,search);
    if(result == -1){
      cout<<"not found"<<endl;
    }
    else{
       cout<<"found"<<endl;
    }
	  }
}




//Step left right	mid	search	arr[mid]	Action/Comment
// 1	0	4	2	5	4	arr[mid] < search
// 2	3	4	3	5	3	arr[mid] == search
// 3	-	-	-	-	-	End of search (5)
// 4	0	4	2	3	4	arr[mid] > search
// 5	0	1	0	3	1	arr[mid] < search
// 6	1	1	1	3	5	arr[mid] > search
// 7	1	0	0	3	-	Search range exhausted
// 8	-	-	-	-	-	End of search (3)
// 9	0	4	2	6	4	arr[mid] < search
// 10	3	4	3	6	3	arr[mid] < search
// 11	4	4	4	6	-	Search range exhausted

