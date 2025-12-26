#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	
	
	cout << "\n \t\t\t\t ----Welcome to the Guess The Number Game---- \n";
	cout << "\n You have to guess a number between 1 and 100. You will have limited choices depending upon tou have chosen difficulty level \n";
	
	while(true){
		cout << "Enter Difficulty Level: \n";
		cout << "1 For Easy Level \n";
		cout << "2 For Medium Level \n";
		cout << "3 For Hard Level \n";
		cout << "4 For Extreme Level \n";
		cout << "0 For Exit the Game \n";
		cout << "Enter : ";
		int level;
		cin>>level;
	srand(time(0));
	int Secret_number = 1 + (rand() % 100 );
	int player_choices;
	
	if(level == 1){
		cout << "You have 10 choices to Guess the Secret Number Between 1 to 100 \n";
		int choices_left = 10;
	 	for(int i = 1; i <= 10; i++){
	 		cout << "\n\n Enter a Number: ";
	 		cin>>player_choices;
	 		if(player_choices == Secret_number){
	 		cout << "Well Played..! You Won " << player_choices << " is the Secret Number " << endl;
	 		cout << "Thankx For Playing....!!! \n";
	 		cout << "Play Again wiht us If you Want " << endl;
	 		break;
			 }
		 }
	
	
	} //if
	else if(level == 2){} //else if1 
	else if(level == 3){} //else if2
	else if(level == 4){} //else if3
	}
	return 0;
}
