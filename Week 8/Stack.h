#include <iostream>
#include <cassert>
using namespace std;

#ifndef _STACK_
#define _STACK_

template <class T> 
class Stack{
	private:
	T *stackArray; //dynamic array
	int size;        //total size of the stack
	int top;         //tio pointer index
	
	public:
	Stack(int);
	~Stack();
	void push(T);
	void pop(T &);
	T peek();
	bool isEmpty() const;
	bool isFull() const; //check isit full
}; 
#endif
//constructor
template <class T> 
Stack<T>::Stack(int s){
	//create the dynamic array size
	stackArray = new T [s];
	size = s; //initialise the size variable
	top = -1;//-1 meant does not point to any
	cout<<"=====new stack object created====="<<endl; 
}

//destructor
template <class T>
Stack<T>::~Stack(){
	delete [] stackArray;
	size = 0;
	top = -1; 
	cout<<"=====has been deleted====="<<endl;
}
template <class T>
bool Stack<T>::isEmpty() const{
return (top ==-1);
}
template <class T>
bool Stack<T>::isFull() const{
	return (top == size-1);
} 
template <class T>
void Stack<T>::push(T newData){
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
template <class T>
void Stack<T>::pop(T &data){
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
template <class T>
T Stack<T>::peek(){
	if (isEmpty()){
		//std::cout <<"The stack is empty! "<<std::endl; 
		assert(top>-1);
	} 
	else
	std::cout<< stackArray[top]<<std::endl;
	
} 


