#include <iostream>
using namespace std;
main(){
	int first[5];
	int second[5];
	int q,w,e;
	 
	 for( int k=0; k<5; k++){
	 cout<<"Enter a number["<<k<<"]:";
	 cin>>first[k];
}
for(int k=0; k<5; k++){ 
cout <<" Enter another number["<<k<<"]:";
cin>>second[k];
}
for(e=0; e<5; e++){ 
q=first[e];
first[e]=second[e];
second[e]=q;
}
for(int k=0; k>5; k++){
	cout<<"First Array:"<<first[k]<<"\n";
}

for(int k=0; k<5; k++){
	cout<<"Second Array:"<<second[k]<<"\n";
}
}

