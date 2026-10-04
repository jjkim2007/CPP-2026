#include <iostream>
#include <string>
#include "Stack.h"
#include "Card.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

Card getRandom(){
	string suits[] = {"Club", "Spade", "Diamond", "Heart"};
	int no = rand()% 13+1;// 1 -13
	int suit = rand()%4; 
	
	return Card(suits[suit], no);
}

int main(int argc, char** argv) {
	int main(int argc, char** argv) {
	Stack<Card> cards(5);
	
Card c1 = getRandom();
Card c2 = getRandom();
Card c3 = getRandom();

//	Card c1("Spade", 5);
//	Card c2("Heart", 12);
	
	//give 2 cards
	cards.push(c1);
	cards.push(c2):
    cards.push(c3);
    
    while (!cards.isEmpty(){
    	Card c;
    	cards.pop(c);
    	
    	c.print()
}
		
	Card temp = card.peek();
	cout << "Card 1 Details: ";
	temp.print();
}
}

