#include <iostream>
#include "LinkedList.h"

using namespace std;
//constructor
LinkedList::LinkedList(){
head = nullptr; //always set head to nullptr
}
//destructor
LinkedList::~LinkedList(){
	Node *temp = head;
	while (head != nullptr){
		head = head->next;
		delete temp;
		temp = head; //new head
	}
}
bool LinkedList::isEmpty() const{
	if (head == nullptr)
	return true;
	else
	return false;
}
void LinkedList::print() const{
Node*temp = head;
while(temp != nullptr){
	cout<< temp->data<<"->";
	temp=temp->next;
}
cout <<"nullptr"<<endl;
}
void LinkedList::append(int data){
	// two possible scenario in appending the data
	Node *newNode = new Node;
	newNode->data = data;
	newNode->next = nullptr;

	if (isEmpty()){
		head = newNode;
	}
	else{
    
		Node *temp = head;
		
		while(temp->next != nullptr)
		{
		temp = temp->next;
	}
	temp->next= newNode;
	}
}

bool LinkedList::remove(int data){
	bool deleted = true;
	Node *prev, *curr;
	//deletion node has 3 scenario
	//1: when the list empty
	//2: when want to delete 1st node
	//3: when want to delete somewhere in the list(success/fail(not found item
	if (isEmpty()){
		deleted = false; //sset flag to false
	}
	else if (head->data == data){
		curr = head->next;
		delete head;
		head = curr; //promote the 2nd 
	}
	else{
		curr = head;
		prev = nullptr;
		
		while(curr->data != data && curr != nullptr){
			prev = curr;
			curr = curr->next;
		}
		if (curr != nullptr){
			prev->next = curr->next;
			delete curr;
		}
		else
		{
			deleted = false; //data not found
		}
	}
	void LinkedList::insert(int data){
		Node *curr, *prev=nullptr, *newNode;
		newnNode= new Node;
		newNode->data = data;
		newNode->next = nullptr;
		
		if(isEmpty()){
			head = newNode;
		}else{
			curr = head;
			while(curr->data < data && curr != nullptr ){
				prev = curr;
				curr = curr->next;
			}
			if (prev == nullptr){
				head = newNode;
				newNode-> next=curr;
			}
			else
			{
			prev->next= newNode;
			newNode->next=curr;
			}
		}
	}
}

