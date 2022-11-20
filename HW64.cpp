#include <iostream>
using namespace std;

main( )
{ 
int m,g,f;

cout<< " Please enter anumber:";
cin>>m;

f=1;
for( g=2; g<=m; g++){ 
f*=g; 
}
cout<< m<<" ! is"<< f;

}
