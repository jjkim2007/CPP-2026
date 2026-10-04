#ifndef _STACK_
#define _STACK_

class Stack{
	private:
	int *stackArray; //dynamic array
	int size;        //total size of the stack
	int top;         //tio pointer index
	
	public:
	Stack(int);
	~Stack();
	void push(int);
	void pop(int &);
	bool isEmpty() const;
	bool isFull() const; //check isit full
	 
	 
	
}; 
#endif

