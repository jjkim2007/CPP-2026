#include "Container.h"
#include <iostream>
using namespace std; 

Container::Container(int s){
	if (s<=0) {
	cout << "Unable to create container object."<<endl;
	cout << "Container size must bigger than 0!!!"<<endl;
}
else
{
	//create the container object
	list = new int[s]; //create a dynamic array
	length = 0;
	size = s;
	cout << "New container object is created "<<endl;
	
}
} 

//destructor
Container::~Container(){
	delete [] list; //destroy the list
	cout<<"Container object is destroyed!!! "<<endl;
}
	int Container::getLength() const{
	return length;
	}
	int Container::getSize() const{
	return size;
	}
	bool Container::isFull() const{
	if (length == size)
    return true;
    else
    return false;
	}
	bool Container::isEmpty() const{
	if (length == 0)
    return true;
	else
	return false;	
	}
	
    //modify state of container
	void Container::addItem(int item){
	if (isFull())
	cout <<"The container is full! Unable to add new item."<<endl;
	else{
	list[length] = item;
	length++;
	cout<< item << "was added to the container..."<<endl;
	}
		
	}
		
	//show the container details
	void Container::print(){
		//print out all item from the list
		// appply the list for a loop
		
	if (isEmpty())
	cout <<"The container has nothing at this moment!!!"<<endl;
	else{
		cout << "The container has these items:"<<endl;
		
		for (int i=0; i<length; i++){
			cout << "Item : "<< (i+1) << "=" << list[i] <<endl;
	
		} 
	} 
			
	}
