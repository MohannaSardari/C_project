#include <iostream>

using namespace std;
main()
 { 
 int salary;
 int salary1 ,salary2 , salary3 , salary4 ,salary5, salary6;
 cout<< "Please enter your salary";
 cin>>salary;
 if (salary<6000000){
 cout<<salary;
  }

else if (salary>=6000000 && salary<8000000) {
salary1= salary-(salary *5/100); 
cout<<salary1;
}

else if (salary>=8000000 && salary <10000000) {
salary2=salary -(salary *10/100);
cout<< salary2; 
}

else if ( salary>=10000000 && salary<14000000){ 
salary3=salary-(salary *15/100);
cout<<salary3;
}
 
 else if( salary>=14000000 && salary <18000000){
salary4= salary-(salary*20/100);
cout<<salary4;	
 }
 
 else if( salary >=18000000 && salary<25000000){ 
 salary5=salary-(salary *25/100);
 cout<< salary5;
 }

else if (salary>25000000){ 
salary6= salary-(salary *35/100);
cout<<salary6;
}
 }
