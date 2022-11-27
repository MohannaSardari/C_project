#include <iostream>
#include <math.h>

using namespace std;

main( ){ 
 int n,i,flag,j,s;
 
 cout<<" please enter a number:";
 cin>>n;
 
 s=0;
 flag=1;
 for(i=2; i<=n; i++){
    for(j=2; j<=i/2; j++ ){
    	if(i%j==0){
    		flag=0;
    		j=i;
    		break;
    
		}
	}
	if(j!=i){
		flag=1;
		s=i+s;

	}
 }
 s=s+2;
 cout<<s;
}


