#include <iostream>
#include <cassert>
using namespace std;
#ifndef _CARD_
#define _CARD_

class Card{
	private:
		string suit;
		int no;

	public:
		Card();
		Card(string s, int n);
		void print()const;
};
#endif
Card::Card(){
	suit =" ";
	no = n;
}
Card::Card(string s, int n){
	suit = s;
	no = n;
}
void Card::print() const{
	//output : spade s
	//output : diamond k
	string output = suit;
	
	switch (no){
		case 1:
			output = output + "of Ace";
			break;
		case 2:
			output = output + " of 2";
			break;
		case 3:
			output = output + " of 3";
			break;
		case 4:
			output = output + " of 3";
			break;
		case 5:
			output = output + " of 4";
			break;
		case 6:
			output = output + " of 5";
			break;
		case 7:
			output = output + " of 6";
			break;
		case 8:
			output = output + " of 7";
			break;
		case 9:
			output = output + " of 8";
			break;
		case 10:
			output = output + " of 9";
			break;
		case 11:
			output = output + " of 10";
			break;
		case 12:
			output = output + " of J";
			break;
		case 13:
			output = output + " of Q";
			break;
		case 14:
			output = output = " of K";
			break;
		
	}
cout << output <<endl;	
}
