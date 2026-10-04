#include <iostream>

using namespace std;

class Counter{
	private:
		int number;
		
	public:
		Counter();
		
		int getNumber() const;
		void setNumber(int n);
		void print() const;
		void increment();
		void decrement();
};
Counter::Counter(){
}
int Counter::getNumber() const{
}
void Counter::setNumber(int n){
	number = n;
}
void Counter::print() const{
	cout << " Counter: "<<number<<endl;
}
void Counter::increment(){
	number++;
}
void Counter::decrement(){
	number--;
}
int main(int argc, char** argv) {
	Counter counter;
	counter.print();
	for (int i=0; i<5; i++)
	counter.increment();
	cout << "Current Counter Value: "<< counter.getNumber();
	return 0;
}
