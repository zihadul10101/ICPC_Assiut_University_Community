#include <iostream>
using namespace std;
int vowel(char c){
  return  c == 'a' || c == 'e' ||  c == 'i' ||  c == 'o' ||  c == 'u'
	       || c == 'A' || c == 'E' ||  c == 'I' ||  c == 'O' ||  c == 'U';   
}
int count_vowel(string value,int size) {
    if (size-1 == 0) {
        return vowel(value[size-1]);
    }
  
     // vowel(value[5-1])+count_vowel(zihad,5-1)
     //vowel(value[4]=d not match )+ (ziha,4)
     //vowel(value[3]=a return = a)+ (zih,3)=a
     //vowel(value[2]=h not match )+ (zi,2)
     //vowel(value[1]=i retuen i)+ (z,1)=i
     //if
     //vowel(value[0]=z not match) 
    return vowel(value[size-1])+count_vowel(value,size-1);
 
}

int main() {
    string value;
    getline(cin,value);
    //value =zihad
    //size=5
    int size= value.size();
   // cout<<"size"<<size<<endl;
    cout<<count_vowel(value,size);

    return 0;
}
