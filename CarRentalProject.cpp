#include<iostream>
using namespace std;

struct Car{
	string Company,model;
	int year,R_No,rent;
	bool rented;
};

void display(Car car){
	cout << "Company : " << car.Company << endl;
	cout << "Model : " << car.model << endl;
	cout << "Year : " << car.year << endl;
	cout << "Registeration Number : " << car.R_No << endl;
	cout << "Rent : " << car.rent << endl << "\n"; 
}
int main(){
	Car car123 = { "Toyota","Corolla",2025,65543,8000,false};
	Car car456 = { "Honda","Civic",2023,1233,7000,false};
	Car car789 = { "Suzuki","Alto",2022,5421,9000,false};
	cout << "---------------------Available Cars---------------------------- \n";
	display(car123);
	display(car456);
	display(car789);
	
	while(true){
	int enter;
	cout << "Registeration Number \n";
	cout << "Enter: ";
	cin>>enter;
	
	switch(enter){ system("CLS");
		case 123:{
			if(!car123.rented){
				car123.rented = true;
				cout << "You have Successfully Rented a Car \n";
				display(car123);
			}
			else{
				cout << "This Car is Not Rented ";
			}
			break;
		} // case 123
		case 456:{ system("CLS");
			if(!car456.rented){
				car456.rented = true;
				cout << "You have Successfully Rented a Car \n";
				display(car456);
			}
			else{
				cout << "This Car is Not Rented ";
			}
			break;
		}
		case 789:{ system("CLS");
			if(!car789.rented){
				car789.rented = true;
				cout << "You have Successfully Rented a Car \n";
				display(car123);
			}
			else{
				cout << "This Car is Not Rented ";
			}
			break;
		}
		default:
			cout << "Enter Valid Registertaion Number \n";
			break;
	} //switch
	}
	return 0;
} // main 
