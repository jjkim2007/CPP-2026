#include <iostream>
#include <cstdlib>
#include <ctime>
#include "LinkedList.h"
using namespace std;
int main(int argc, char** argv){
	int marks[] ={20,30,35,45,56,62,77,81,88,90};
	LinkedList sortedMarkList;
	int size = sizeof(marks) / sizeof (int);
	for (int i=0; i<10; i++){
		sortedMarkList.append(marks[i]);
	}
	cout<<"***Original Mark List***"<<endl;
	sortedMarkList.print();
}
for (int i=1; i<=3; i++){
	int mark = 0;
	cout <<"Enter a mark in a range (0-100): ";
	cin>>mark;
	
	sortedMarkList.insert(mark);
}
cout<<"***Updated Mark List***"<<endl;
sortedMarkList.print();
	
	
	
	
	
	/*first exercise
	srand(time(0));
	LinkedList markList;
	for (int i=0; i<10; i++){
		int mark = static_cast<int>(rand() % 101);
		markList.append(mark);
	}
	markList.print();//display all the 10 random marks
	int marks;
	cout <<"Enter a mark that to be deleted: ";
	cin >> marks;
	
	bool isDeleted = markList.remove(marks);
	if (isDeleted){
	
	cout<<marks<<"is removed from the list..."<<endl;
	}else{
	cout<<marks<<"is not found in the list..."<<endl;
	cout<<"transaction fail"<<endl;
}
markList.print();
	return 0;
}*/
