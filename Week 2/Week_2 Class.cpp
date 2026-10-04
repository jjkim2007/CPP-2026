.#include <iostream>
#include<string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class PersonType{
	private:
		string firstName;
		string lastName;
		string title;

	
	public:
		//constructor
		PersonType(string fn, string ln, string t);
		
		//getters
		string getFirstName() const;
		string getLastName() const;
		string getTitle() const;
		
		//setters
		void setFirstName(string fn) ;
		void setLastName(string ln) ;
		void setTitle(string t) ;
				
};

//Implement the class  method
PersonType::PersonType(string fn, string ln, string t){
	firstName = fn;
	lastName = ln;
	title = t;
}

//getters

string PersonType::getFirstName() const {
	return firstName; 
}

string PersonType::getLastName() const {
	return lastName; 
}

string PersonType::getTitle() const {
	return title; 
}

void PersonType::setFirstName(string fn){
	firstName = fn;
}

void PersonType::setLastName(string ln){
	lastName = ln;
}

void PersonType::setTitle(string t){
	title = t;
}


int main(int argc, char** argv) {
	PersonType person1("AAA BBB", "CCC", "Mr. ");
	 
	PersonType person2("Bynn Shiuan", "Tan", "YB. ");
	
	cout << person1.getTitle() << person1.getFirstName() << " "<<person1.getLastName() << endl;
	
	person2.setTitle("Mrs.");
	person2.setFirstName("Jane");
	cout << person2.getTitle() << person2.getFirstName() << " "<< person2.getLastName() << endl;
	

	

	
	 
	return 0;
}

