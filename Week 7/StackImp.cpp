#include <iostream>
#include "Stack.h"

using namespace std;

//constructor
Stack::Stack(int s){
	//create the dynamic array size
	stackArray = new int [s];
	size = s; //initialise the size variable
	top = -1;//-1 meant does not point to any
	cout<<"=====new stack object created====="<<endl; 
}
//destructor
Stack::~Stack(){
	delete [] stackArray;
	size = 0;
	top = -1; 
	cout<<"=====has been deleted====="<<endl;
}
bool Stack::isEmpty() const{
return (top == -1);
}
bool Stack::isFull() const{
	return (top == size  -1);
} 
void Stack::push(int newData){
	if (isFull()){
	cout<<"The stack is full"<<endl;
	cout<<"Unable to add new item"<<endl;
	}
	else{
		top++;//increase the top pointer value
		stackArray[top] = newData;
	}
} 
//try to remove the pop item from the stack
void Stack::pop(int &data){
	if (isEmpty()){
		cout<<"The stack is empty"<<endl;
		cout<<"Nothing is removed from the stack"<<endl;
	}else{
		//if have some data in the stack list
		data = stackArray[top];
		//revise the top pointer by -1
		top--;
	}
}

