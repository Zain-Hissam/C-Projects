#include<iostream>
#include<vector>
using namespace std;

class Subject{
	public:
		string sub_name;
		float credit;
		float gradePoint;
		
		Subject(string sub_name,float credit,float gradePoint){
			this->sub_name = sub_name;
			this->credit = credit;
			this->gradePoint = gradePoint;
		}
};

class Student{
	public:
	string name;
	vector<Subject> subject;
	Student(string name){
		this->name = name;
	}
	void add_subject(string sub_name,float credit,float gradePoint){
		Subject newsub(sub_name,credit, gradePoint);
		subject.push_back(newsub);
	}
	float calcu_CGPA(){
		int total_credit = 0;
		int total_gradePoint = 0;
		for(int i = 0; i < subject.size(); i++){
			total_credit += subject[i].credit;
			total_gradePoint += subject[i].credit * subject[i].gradePoint;
		}
		return (total_credit > 0) ? (total_gradePoint / total_credit) : 0;
	}
	void display(){
		cout << "Student Name: " << name << endl;
		float cgpa = calcu_CGPA();
		cout << "CGPA: " << cgpa;
	}
};

int main(){
	string std_name;
	int no_subject;
	
	cout << "Enter Student Name: ";
	getline(cin,std_name);
	
	Student zain(std_name);
	cout << "Enter Number of subject: ";
	cin>>no_subject;
	
	
	for(int i = 0; i < no_subject; i++){
		
		cout << "Subject " << (i+1) << ": \n";
		string sub_name;
		float credit;
		float gradePoint;
		
		cout << "Enter name of subject: ";
		cin.ignore();
		getline(cin,sub_name);
		
		cout << "Enter credit hour: ";
		cin>>credit;
		
		cout << "Enter GradePoint: ";
		cin>>gradePoint;
		zain.add_subject(sub_name,credit, gradePoint);
	}
	zain.display();
	
	return 0;
}
