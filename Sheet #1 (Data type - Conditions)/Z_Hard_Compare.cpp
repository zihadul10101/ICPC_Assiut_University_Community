#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	/*    
	     2^5        3^6
		log(2^5)   log(3^6)
		5log(2)    6log(3)
	*/
	double num1,num2,num3,num4;
	cin>>num1>>num2>>num3>>num4;
	double res1 = num2*log(num1);
	double res2 = num4*log(num3);
	if(res1 > res2){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
// a=2 b=5
// pow(a, b) calculates 2^5, which is equal to 32.

// b * log(a) calculates 5 * log(2), which is approximately equal to 5 * 0.6931 ≈ 3.4655.
// pow(a, b) and b*log(a) is same?
// No, pow(a, b) and b * log(a) are not the same. They represent different mathematical operations and can yield different results.

// pow(a, b) calculates "a raised to the power of b." It means that it calculates a^b, where 'a' is the base, and 'b' is the exponent.

// b * log(a) calculates "b multiplied by the natural logarithm of a." It means that it calculates b * ln(a), where 'a' is the number whose natural logarithm is taken, and 'b' is multiplied by that result.

// These two expressions will generally yield different results for non-integer values of 'b' and 'a'. However, for integer values of 'b' and 'a,' they will produce the same result. The relationship between them is based on the properties of 
// logarithms and exponentiation, particularly when dealing with integer exponents.