#include <iostream>

using namespace std;

main() { 

int x, y , t;

cout<<" please enter value for x:";
cin>> x;
cout<<" please enter value for y: ";
cin>>y;


t=x;
x=y;
y=t;

cout<< "x:"<<x<< " "<< "y:"<< y;

}
