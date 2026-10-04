#ifndef _CONTAINER_
#define _CONTAINER_
class Container {
	private:
		int *list; //store a set of int
		int length; //current item length ji ge
		int size; //total container size
	public:
		Container(int size); //constructor
		~Container(); //destructor
		
		int getLength() const;
		int getSize() const;
		bool isFull() const;
		bool isEmpty() const; 
		
		//modify state of container
		void addItem(int);
		
		//show the container details
		void print();
				
};

#endif
