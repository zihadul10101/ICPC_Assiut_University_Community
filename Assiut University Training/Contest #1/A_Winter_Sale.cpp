#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,p;
    cin>>x>>p;
    // 20 80
    // Calculate the original price before the discount
    double originalPrice = p / (1 - (x / 100.0));


     //(x / 100.0)= .2
     //1-.2=.8
    //   80/.8= 100
 std::cout << std::fixed << std::setprecision(2) <<originalPrice << std::endl;
   
    

}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	double discount,price;
// 	cin>>discount>>price;
	
// 	double pre = 100 - discount;
// 	double priceResult = price/pre;
// 	double result = (discount * priceResult) + price;
// 	cout<<result<<endl;
// }