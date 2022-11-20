#include <iostream>
using namespace std;

main() 
{ 
int m,t;

cout<<"Please enter a number:";
cin>> m;

for( t=2; t<= m/2; t++){

if ( m%t== 0)

cout<< t<< "\n"; 
} 
}
