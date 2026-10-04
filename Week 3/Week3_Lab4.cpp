//using pointer as an array
#include <iostream>
using namespace std;

int main(){
	int x[] = { 5, 7, 8, 0 ,3 ,6 ,4};
	
	//create a pointer points to array x
	int *ptr = x; //array is already an address, no need&
	
	cout<< "*ptr= "<<*ptr<<endl;
	cout<< "ptr[0]= "<<ptr[0]<<endl;
	
	//use ptr pointer print out 3rd element
	cout<< "*(ptr+2) = "<<*(ptr+2)<<endl;
	
	//move the pointer to the fifth element 
	ptr = ptr +4;
		cout<< "*ptr= "<<*ptr<<endl;
	
	//Task: Move the pointer back to the second element
	ptr = ptr -3;
		cout<< "*ptr= "<<*ptr<<endl;


	
	return 0; 
	
}
