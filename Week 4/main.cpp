#include <iostream>
#include "Container.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Container c1(10); //container w/ size 10
	if (c1.isEmpty())
	cout<< "Currently the container has no item." <<endl;
	else
	cout<< "Something inside the container. Please check it!!!"<<endl;

//add 5 integer value to the c1 object using a loop
for (int i = 0; i <= 5; i++) 
c1.addItem(i);

c1.print();
return 0;
}


