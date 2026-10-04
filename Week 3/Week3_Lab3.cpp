#include <iostream>
using namespace std;

struct Point{
	int x;
	int y;
}; 

void printPoint(Point p){
	cout << "("<< p.x << "," << p.y <<")"<<endl;
}

void swapPoint(Point *p1, Point *p2){
	Point temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	

	
	cout << "Point 1:";
	printPoint(*p1);
	cout << "Point 2:";
	printPoint(*p2);
 

}
int main ()
{

	Point p1;
	Point p2 = {90 , 25}; 
	
	cout<< "Enter x value: ";
	cin>> p1.x;
	
	cout<< "Enter y value: ";
	cin>> p1.y;
	
	printPoint(p1) ;
	swapPoint(&p1,&p2);
	
	return 0;
}
