#include<iostream>
#include<fstream>
using namespace std;
int main();
//void login();
//void registeration();
//void forget();
class LOGIN{
	public:
void login(){
	int count;
	string userId,password,Id,pass;
	system("cls");
	cout << "Enter UserName and Password ";
	cout << "UserNAme: ";
	cin>>userId;
	cout << "Password: ";
	cin>>password;
	ifstream input("record.txt");
	while(input>>Id>>pass){
		if(Id == userId && pass == password){
			count = 1;
		}
	}
	input.close();
	if(count == 1){
		cout << "Your Login Is successfull Thank you for Login \n";
		main();
	}
	else{
		cout << "Error Please Check your UserNAme And Password \n";
		main();
	}
}

void registeration(){
	string rusername, rpassword,rId,rpass;
	system("cls");
	cout << "\t\t\t Please Enter UserName ";
	cin>>rusername;
	cout << "\t\t\t Please Enter Password ";
	cin>>rpassword;
	while(rpassword.length() < 8){
		cout << "Required 8 letter minimum ";
	}
	ofstream f("record.txt", ios::app);
	f<<rusername<<" "<<rpassword;
	system("cls");
	cout << "Registeration is successfull thankx ";
	main();
	
}


void forget(){
	int option;
	system("cls");
	cout << "You want to Forget Your Password? No worries \n";
	cout << "Press 1 to search your Id by username \n";
	cout << "Press 2 go back to the main menu \n";
	cout << "Enter your choice \n";
	cin>>option;
	switch(option){
		case 1:
			{
			int count = 0;
			string suserId,sId,spass;
			system("cls");
			cout << "Enter Username Which you remembered ";
			cin>>suserId;
			ifstream f2("record.txt");
			while(f2>>sId>>spass){
				if(sId == suserId){
					count = 1;
				}
			}
			f2.close();	
			if(count == 1){
				cout << "Your Account is found \n";
				cout << "Your password is " << spass;
				main();
			}
			}
			break;
			case 2:
				{
					main();
				}
				default:
					cout << "Wrong Choice Please try again thankx ";
					break;
	}
}
};
int main(){
	LOGIN log;
	int choice;
	cout << "\t\t\t_______________________________________________________\n\n\n";
	cout << "\t\t\t                       Wecolme To Our PAge              \n\n\n";
	cout << "\t\t\t________________________MENU_____________________________\n\n\n";
	cout << "Press 1 to Login " << endl;
	cout << "Press 2 to Registeration " << endl;
	cout << "Press 3 Forget password If you want " << endl;
	cout << "Press 4 to Exit " << endl;
	cout << "Please Enter a choice ";
	cin>>choice;
	
	switch(choice){
		case 1:
			log.login();
//			login();
			break;
		case 2:
			log.registeration();
//			registeration();
			break;
		case 3:
			log.forget();
//			forget();
			break;
		case 4:
			cout << "Thank YOUU..........!!!!!!!!! \n";
			break;
			default:
			cout << "Please Enter Option given above ";
			break;			
	}
	
	return 0;
}

//class LOGIN{
//	public:
//LOGIN log;
//void login(){
//	int count;
//	string userId,password,Id,pass;
//	system("cls");
//	cout << "Enter UserName and Password ";
//	cout << "UserNAme: ";
//	cin>>userId;
//	cout << "Password: ";
//	cin>>password;
//	ifstream input("record.txt");
//	while(input>>Id>>pass){
//		if(Id == userId && pass == password){
//			count = 1;
//		}
//	}
//	input.close();
//	if(count == 1){
//		cout << "Your Login Is successfull Thank you for Login \n";
//		main();
//	}
//	else{
//		cout << "Error Please Check your UserNAme And Password \n";
//		main();
//	}
//}
//
//void registeration(){
//	string rusername, rpassword,rId,rpass;
//	system("cls");
//	cout << "\t\t\t Please Enter UserName ";
//	cin>>rusername;
//	cout << "\t\t\t Please Enter Password ";
//	cin>>rpassword;
//	ofstream f("record.txt", ios::app);
//	f<<rusername<<" "<<rpassword;
//	system("cls");
//	cout << "Registeration is successfull thankx ";
//	main();
//	
//}
//
//
//void forget(){
//	int option;
//	system("cls");
//	cout << "You want to Forget Your Password? No worries \n";
//	cout << "Press 1 to search your Id by username \n";
//	cout << "Press 2 go back to the main menu \n";
//	cout << "Enter your choice \n";
//	cin>>option;
//	switch(option){
//		case 1:
//			{
//			int count = 0;
//			string suserId,sId,spass;
//			system("cls");
//			cout << "Enter Username Which you remembered ";
//			cin>>suserId;
//			ifstream f2("record.txt");
//			while(f2>>sId>>spass){
//				if(sId == suserId){
//					count = 1;
//				}
//			}
//			f2.close();	
//			if(count == 1){
//				cout << "Your Account is found \n";
//				cout << "Your password is " << spass;
//				main();
//			}
//			}
//			break;
//			case 2:
//				{
//					main();
//				}
//				default:
//					cout << "Wrong Choice Please try again thankx ";
//					break;
//	}
//}
//};
