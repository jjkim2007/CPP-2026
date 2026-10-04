#include <iostream>
using namespace std;

struct Subject{
	string title;
	double mark;
};

int main(){
	//Q1: Create subject called s1 under subject type
	Subject s1;
	s1.title = "Data Structure";
	s1.mark = 80;
	
	//Q2: Print out s1 details
	cout<<"Subject title: "<<s1.title<<endl;
	cout<<"Subject mark: "<<s1.mark<<endl;
	
	//Q3: Create another subject called s2 with any details
	Subject s2;
	s2.title = "Computer Architecture";
	s2.mark = 70;
	
	Subject lowest;
	if (s1.mark < s2.mark)
		lowest = s1;
	else
		lowest = s2;
	cout<< "The lowest mark is "<<lowest.mark<<" for "<<lowest.title<<endl;
	

}
