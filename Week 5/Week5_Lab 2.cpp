#include <iostream>

using namespace std;

struct Student{
	double cgpa;
	string name;
};

struct Node{
	Student info;
	Node *next;
};
void printStudent(Node *node){
	cout << "[" << node->info.name<<","<<node->info.cgpa<<"]"<<endl;
}
int main(){
	double cgpa=0.0;
	string name="";
	char nextInput = 'y';
	
	Node *first = nullptr;
	Node *temp = nullptr;
	
	first = new Node;
	cout << "Enter Student Name: "<<endl;
	getline(cin, name);
	cout << "Enter Student Cgpa: "<<endl;
	cin>> cgpa;
	
	first->info.name =name;
	first->info.cgpa =cgpa;
	first->next =nullptr;
	
	printStudent(first);
	
	cout<<"Input Next Student Record? [y/n]:";
	cin>> nextInput;
	
	while (nextInput =='y' || nextInput=='Y'){
		
	cin.ignore();
	cout << "Enter Student Name: ";
	getline(cin, name);
	cout << "Enter Student Cgpa: ";
	cin>> cgpa;
	
	temp = new Node;
	temp->info.name =name;
	temp->info.cgpa =cgpa; //change first to temp, temp is forever marker
	temp->next = nullptr;
	
	if(first->next == nullptr){
		//we only have one node in the list
		first->next =temp;
	}else{
		Node *curr = first; //make current point to first
		
		while (curr->next !=nullptr)
		curr = curr->next;
		
		curr->next = temp;
	}
		cout <<"Input Next Student Record? [y/n]:";
		cin>>nextInput;
	}
	Node *temp2 =first;
	while (temp2 != nullptr){
		printStudent (temp2);
		
		temp2= temp2->next;
	}
}
	
	


