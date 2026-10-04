#include <iostream>
using namespace std;

int main(){
	//declare the varible of the triangle
	double base=0.0, height=0.0;
	double area= 0.0;
	
	//declare 3 pointer variable and point to the above variable
	double *ptrBase = &base;
	double *ptrHeight = &height;
	
	//prompt the user to enter the base and height by using pointer variables
	cout << "Enter triangle base: ";
	cin >> *ptrBase;
	
	cout << "Enter triangle height: ";
	cin >> *ptrHeight;
	
	area = base * height * 0.5;
	
	cout << "The area of the triangle is: "<< area <<endl;
	
	return 0;
}
