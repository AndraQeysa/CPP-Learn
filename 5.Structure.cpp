#include <iostream>
using namespace std;

int main(){
	// mirip array tapi bisa lebih dari satu jenis variable
	struct{
		int my_Num;
		string my_Name;
		string my_Nick;
		char my_Char;
	} myStructure, myStructure2;
	
	myStructure.my_Num = 2;
	myStructure.my_Name = "Shevandra";
	myStructure.my_Nick = "Andra";
	myStructure.my_Char = 'A';
	
	myStructure2.my_Num = 1;
	myStructure2.my_Name = "Alif Wahyu";
	myStructure2.my_Nick = "Alif";
	myStructure2.my_Char = 'W';
	
	cout << "Structure 1 " <<endl;
	cout << myStructure.my_Num << endl << myStructure.my_Name << endl << myStructure.my_Nick << endl << myStructure.my_Char << endl;
	cout << "Structure 2 " <<endl;
	cout << myStructure2.my_Num << endl << myStructure2.my_Name << endl << myStructure2.my_Nick << endl << myStructure2.my_Char << endl;
	
	return 0;
}
