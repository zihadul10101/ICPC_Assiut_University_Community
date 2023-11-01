// #include <bits/stdc++.h>
// using namespace std;

// int main(){
   

//    int testCase;
//    cin>>testCase;
//    while(testCase--){
//      string ch;
//      int chLength,mid;
//        cin>>ch;
//       chLength = ch.length();
//       char first,last;
//      if(chLength<10){
//         cout<<ch<<endl;
//      }else{
      
//         for(int i=0;i<chLength;i++){
//             if(i==0){
//                 first=ch[i];
//             }
//             else if(i==chLength-1){
//                 last=ch[i];
//             }
          

//         }
//      }
//     mid=chLength-2;
   
//    cout<<first<<mid<<last<<endl;
   
  
//    }


 
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        string ch;
        int chLength;
        cin >> ch;
        chLength = ch.length();
        char first, last;
        
        if (chLength <= 10) {
            cout << ch << endl;
        } else {
            first = ch[0];
            last = ch[chLength - 1];
            int mid = chLength - 2;
            cout << first << mid << last << endl;
        }
    }
}
