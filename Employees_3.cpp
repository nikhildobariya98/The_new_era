#include<iostream>
using namespace std;

class Employee{
  public:
  	int id, age, exp;
	  string name, role, salary, city, company_name;
	  
  public:
	void setEmp(){
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Age: ";
		cin >> age;
		cout << "Enter Company Name: ";
		cin >> company_name;
		cout << "Enter Role: ";
		cin >> role;
		cout << "Enter Salary: ";
		cin >> salary;
		cout << "Enter Experince: ";
		cin >> exp;
		cout << "Enter City: ";
		cin >> city;
	} 
	
	void getEmp(){
		cout << id << " " << name << " " << company_name << " " << role << " "
		<< salary << " " << exp << " " << city;
	}
};

int main(){
	Employee emp[5];
	
	for(int i = 0; i < 2; i++){
		cout << "Enter the detail of employee " << i+1 << endl;
		emp[i].setEmp();
	}
	
	cout << endl;
	for(int i = 0; i < 2; i++){
		cout << "Detail of employee " << i+1 << endl;
		emp[i].getEmp();
		cout << endl;
	}
	
	for(int i = 0; i < 2; i++){
		cout << "Detail of employee " << i+1 << endl;
		emp[i].getEmp();
		cout << endl;
		
	}
	for(int i = 0; i < 2; i++){
		cout << "Detail of employee " << i+1 << endl;
		emp[i].getEmp();
		cout << endl;
		
	}
	
	for(int i = 0; i < 2; i++){
		cout << "Detail of employee " << i+1 << endl;
		emp[i].getEmp();
		cout << endl;
	}
}
