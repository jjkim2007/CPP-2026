#include <iostream>
using namespace std;

struct Node{
	int number;
	Node *next;
}; 

int main(){
	Node *node1 = new Node;
	node1->number =10;
	node1->next = nullptr; 
	
	Node *node2 = new Node;
	node2->number =20;
	node2->next = nullptr;
	
	Node *node3 = new Node;
	node3->number =30;
	node3->next = nullptr;
	
	//link node1 to 2
	node1->next = node2; 
	node2->next = node3;
	 
	cout << "Node 1 data = "<< node1->number <<endl; 
		cout << "Node 2 data = "<< node1->next->number <<endl; 
			cout << "Node 3 data = "<< node1->next->next->number <<endl; 
			
			
	//create another node called temp with value 25
	Node *temp = new Node;
	temp->	number =25;
	temp->next	= nullptr; 
	
	node2->next=temp;
	temp->next =node3;
	
	cout<< "Temp node = "<<node1->next->next->number<<endl; 
	


	
	


	 
	
	return 0;
}
