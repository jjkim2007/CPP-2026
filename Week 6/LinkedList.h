#ifndef _LINKEDLIST_
#define _LINKEDLIST_
class LinkedList{
	private:
		struct Node{
			int data;
			Node * next;
		};
		Node*head; //the 1st pointer in linked
	public:
		LinkedList(); //cons
		~LinkedList(); //destructor
		void append(int data); //add new item the end of list
		bool isEmpty() const; //check is list empty or not
		void print() const; //display list
		
		//extra utility
		void insert(int);
		bool remove(int); // remove item
		int search(int);
};
#endif
