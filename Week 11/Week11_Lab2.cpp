#include <iostream>
#include <string>
#include <iomanip>

#define SIZE 10
using namespace std;

class Food{
	private:
		string name;
		double price;
		
	public:
		Food(string n, double p){
			name = n;
			price = p;
		
}
	string getName() const {return name;}
	double getPrice() const {return price;}
	
	void setName(string n) {name = n;}
	void setPrice(double p) {price = p;}
}; 
void printMenu(Food []);
int findCheapestFood(Food f[]);
int main(){
	Food foods[] = {
	Food("Laksa",6.00),
	Food("Chicken Rice",10.00),
	Food("Wan Tan Mee",7.00),
	Food("Nasi Kandar",12.00),
	Food("Fried Rice",8.00),
	Food("Roti Canai",5.00),
	Food("Chicken Chop",20.00),
	Food("Curry Mee",7.00),
	Food("Cheese Burger",12.00),
	Food("ABC Salad",9.00),
	};
printMenu(foods);
int lowestFoodIndex = findCheapestFood(foods);
cout <<"Today hot promotion with the lowest price food "<<foods[lowestFoodIndex].getName()<<" RM"<<foods[lowestFoodIndex].getPrice(); 

return 0;
}
int findCheapestFood(Food f[]){
	int pos = 0;
	Food cheapest = f[0];
	for (int i =1; i<SIZE; i++){
		
		if (cheapest.getPrice() > f[i].getPrice()){
			cheapest= f[i];
			pos = i;			
		}
	}
	return pos;
}
void printMenu(Food f[]){
	cout<<setprecision(2)<<fixed<<showpoint; 
	for (int i=0; i<SIZE; i++){
		cout << setw(5) << (i+1) << setw(20) <<f[i].getName()<<setw(10)<<f[i].getPrice()<<endl;
		 
		cout<<endl<<endl;
		int quantity =0; 
			int option=0;
		cout<<"Select food item [1-10]: ";
		cin>>option;
		
		cout <<"Enter food quantity:";
		cin>>quantity;
		
		double total = foods[option-1].getPrice() * quantity;
		cout<<"The total price is RM"<<total<<endl; 
	
		
		
		return 0; 
	}
}
	 


