#include <iostream>
#include "Stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	Stack stack(10);
	
	//call the isEmpty method.print out stack is empty
	//the stack has no  item
	if (stack.isEmpty()){
	
		cout <<"Stack is empty! the stack has no item"<<endl;
}
//task1: Prompt the user to enter 11marks and store into project
for (int i=0; i<=11; i++){
    int mark =0;
    cout<<"Enter mark "<<i<<":";
    cin>>mark;
    
	stack.push(mark); 
} 
//remove top 3 mark
for (int i=1; i<=3; i++){
	int mark=0;
	stack.pop(mark);
	
	cout<<"removing mark: "<<mark<<endl;
	
	
}
	
	return 0;
}
