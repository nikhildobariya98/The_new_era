#include<iostream>

using namespace std;

class user{
	
	private:
	
	void demo(){
		
		cout << "demo function: ";
	}
	
	public:
		
		void fun(){
			
			cout << "hello function";
			
		}
		
};

main(){

	
	class user obj;
	obj.fun();
}
