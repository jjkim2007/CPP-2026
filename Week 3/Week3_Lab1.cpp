//understand about pointer
#include <iostream>
using namespace std;

int main() {
	int age = 20;
	//make ptrAge point to age
	int *ptrAge = &age; //pointer
	
	cout << "age = " << age <<endl; // age value
	cout << "age address = " << &age <<endl; // address of age
	cout << "ptrAge = " << ptrAge <<endl; //address of age
	cout << "&ptrAge = " << &ptrAge << endl; //address of ptrAge
	cout << "*ptrAge = " << *ptrAge << endl; //indirect value of ptrAge address 
	
	*ptrAge = 40;
	cout << "age = " <<age <<endl;
	cout << "*ptrAge = "<< *ptrAge << endl; 
	
	return 0;
}
