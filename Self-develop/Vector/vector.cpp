#include <bits/stdc++.h>
using namespace std;
void print(vector<int> data)
{
    cout << "Total element:" << data.size() << endl;
    for (int datam : data)
    {
        cout << datam << " ";
    }
    cout << "\n\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // 2 4 5 8 9 add 7 in 2 index
    // create ,add ,read,updated,delete,
    // create
    // vector<type> name (elements);
    // vector<int> vect(5,2);
    // vector<int> vect({1,2,3,4,5});
    //    vector<int> vect={1,2,3,4,5};
    //    vector<int> vect2=vect;
    // add element
    // vector<int> vect = {1, 2, 3};
    // vect.push_back(2);
    // print(vect);
 
    // vect.begin();
    // vect.end();
     // vect.insert(position,element);
      //vect.insert(vect.begin(),8);
     // vect.insert(vect.begin()+2,8);// add 2 index
    // vect.insert(vect.end(),8); 
    // vect.insert(vect.end()-1,8); 
   //  vect.insert(vect.begin(),2,8);// add 2 8 in begain
     // vect.insert(vect.begin()+1,2,8);
 
     //read element
//    cout<<vect[2]<<endl;
//    cout<<vect.front()<<endl;
//    cout<<vect.back()<<endl;
    // print(vect);
//   vector<int> vect = {1, 2, 3};
//   for(int d:vect){
//     cout<<d<<" ";
//   }
// vector<int> vect = {1, 2, 3,6,7};
// int ln=vect.size();
//   for(int i=0;i<ln;i++){
//     cout<<vect[i]<<" ";
//   }
// vector<int> vect = {1, 2, 3,6,7};
// int ln=vect.size();
//   for(int i=2;i<ln-1;i++){
//     cout<<vect[i]<<" ";
//   }
// convert  vector to array
//  vector<int> vect = {1, 2, 3,6,7};
// int *d=vect.data();
// cout<<d[2]<<endl;
// updated
//  vector<int> vect = {1, 2, 3,6,7};
//  vect[2]=11;
//  //cout<<vect[2]<<endl;
//  print(vect);
// swap
// vector<int> vect1 = {1, 2, 3,6,7};
// vector<int> vect2 = {11,66,55};
// cout<<"Before swap\n";
// print(vect1);
// print(vect2);
// vect1.swap(vect2);
// cout<<"After swap\n";
// print(vect1);
// print(vect2);
// delete
// vector<int> vect1 = {1, 2, 3,6,7};
// vect1.pop_back();
// print(vect1);
// data clear
// vector<int> vect1 = {1, 2, 3,6,7};
// vect1.clear();
// print(vect1);
// erase
vector<int> vect1 = {1, 2, 3,6,7,55};
//vect1.erase(vect1.begin()+0,vect1.begin()+3);
vect1.erase(vect1.begin()+2,vect1.end()-2);
print(vect1);

 return 0;
 }