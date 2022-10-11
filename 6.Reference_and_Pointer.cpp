#include <iostream>
using namespace std;

int main(){
	//Reference using &
	string food = "Bakso";
	string &meal = food;
	
	cout << "food = " << food << endl;
	cout << "meal = " << meal << endl;
	//memories address
	cout << "food = " << &food << endl;
	
	//Pointer using *
	string* launch = &meal;
	cout << "Launch = " << launch << endl;
	
	//Dereference
	cout << "Launch = " << *launch << endl;
	
	//Change Value
	*launch = "Soto";
	cout << "Launch = " << *launch << endl;
	cout << "food = " << food << endl;
	cout << "meal = " << meal << endl;
	return 0; 
}
