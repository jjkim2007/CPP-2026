#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int SIZE = 11;
struct Player{
	string name;
	int player_no;
};

class FootBall_Team{
	private:
		int index=0;
		string team_name;
		Player players[SIZE];
	public:
		FootBall_Team(string);
		void add_player(Player);
		void print_Player() const;
};

//Create consturctor to initialise the team name
FootBall_Team :: FootBall_Team(string name){
	team_name = "INTI";
}
//Create add_player to add in a new player profile
void FootBall_Team::add_player(Player p){
	if (index < SIZE){
		players[index]=p;
		index ++;
		cout<< p.name<< " is added to the FootBall team"<<endl;
	}
}
//Create print_player to print out all player details
void FootBall_Team::print_Player() const{
	cout<<"Player Name"<<setw(20)<<"Player No " <<setw(20)<<endl;
cout << "##################################################################" <<endl;
	for(int i=0; i<index; i++){
		cout<<left;
		cout<<setw(20)<<players[i].name<<setw(20)<<players[i].player_no<<setw(20)<<endl;
	}
}
int main(){
	
}
