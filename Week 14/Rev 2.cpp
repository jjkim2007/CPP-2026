#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Food{
	string name;
	double price;
	int quantity;
};

class FoodBank{
	private:
		Food foods[20]; //maximum 20 foods
		int index; //to keep trach how many food in FoodBank
	
	public:
		FoodBank();
		void addFood(Food);//add new food
		void printFoods() const; //print out all Food

};

//Q1: Implement the Food Constructor: set index = 0
FoodBank::FoodBank(){
	index = 0;
}


//Q2: Implement the addFood method. Add food to array
void FoodBank::addFood(Food f) {
	if (index < 20){
		foods[index] = f;
		index++;
		cout<<f.name<<" is added to the food bank..."<<endl;
	}else{
		cout <<"FoodBank Full Already Lahhhh"<<endl;
	}
}


//Q3: IMplement the printFood out print out all food details in tabular format
void FoodBank::printFoods()const{
	cout<<"Food Name"<<setw(20)<<"Price ($)" <<setw(20)<<"Quantity"<<setw(10)<<endl;
cout << "##################################################################" <<endl;
	for(int i=0; i<index; i++){
		cout<<left;
		cout<<setw(20)<<foods[i].name<<setw(20)<<foods[i].price<<setw(20)<<foods[i].quantity<<setw(10)<<endl;
	}
	
}

int main(){
//Q1: Create a FoodBank object
FoodBank fb; //call the default constructor

//Q2: Add 5 foods inside FoodBank object
Food f1 ={"Maggie Mee", 5.00, 50};
Food f2= {"Bihun", 2.8, 1000};
Food f3= {"Biscuit", 3.8, 200};
Food f4= {"Rice", 10.00, 80};
Food f5= {"Nestum 3in1", 8.9, 40};

fb.addFood(f1);
fb.addFood(f2);
fb.addFood(f3);
fb.addFood(f4);
fb.addFood(f5);


//Q3: Print out all the food banks

	fb.printFoods() ;
	
	
	
	return 0;
}
