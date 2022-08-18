#include<iostream>
using namespace std;

class Car{
  public:
    int id, release_year;
    string company_name, color, model;
    
  public:
    void setCar(){
    	cout << "Enter car ID: ";
    	cin >> id;
    	cout << "Enter car company name: ";
    	cin >> company_name;
    	cout << "Enter car model: ";
    	cin >> model;
    	cout << "Enter car color: ";
    	cin >> color;
    	cout << "Enter car release year: ";
    	cin >> release_year;
    }
    
    void getCar(){
    	cout << "Car ID: " << id << endl << "Car company name: " << company_name << endl << 
    	"Car model: " << model << endl << "Car color: " << color << "Car release year: " << 
    	release_year << endl;
    }
};

int main(){
    Car cars[4];
    for(int i = 0; i < 4; i++){
    	cout << "Enter car detail " << i+1 << ": " << endl;
    	cars[i].setCar();
    	cout << endl;
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
    	cout << "Car detail " << i+1 << ": " << endl;
    	cars[i].getCar();
    	cout << endl;
    }
     for(int i = 0; i < 4; i++){
    	cout << "Car detail " << i+1 << ": " << endl;
    	cars[i].getCar();
    	cout << endl;
    }
     for(int i = 0; i < 4; i++){
    	cout << "Car detail " << i+1 << ": " << endl;
    	cars[i].getCar();
    	cout << endl;
	}
}
