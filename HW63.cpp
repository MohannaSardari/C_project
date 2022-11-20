#include <iostream>
using namespace std;

main( )
{ 

int num1,num2, k, GCD;

cout<< " Please enter two numbers";

cin >> num1,num2;

for( k=1; k<=num1 && k <=num2; k++){ 
if ( num1 % k==0 && num2%k==0) 

GCD=k;
}
cout <<"GCD of"<< num1 << " and "<< num2<<" is"<<GCD;
}
