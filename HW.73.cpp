#include <iostream>

using namespace std;
main(){ 
 int n,i,s;
 
 cout<<"please enter a number:";
 cin>>n;
 s=0;
 for(i=2; i<=n/2; i++){
 	if(n%i==0){
 		s=i+s;
	 }
 }
 cout<<s;
}
