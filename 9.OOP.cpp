#include <iostream>
using namespace std;

// class
class myClass { // class
 public:	// access specifier
  int myInt;	// attribute
  string myString;
};

// class methods
// there is two way to define methods to class : inside and outside
// inside

class secClass{
 public :
  void insideMethod() {
   cout << "This is method from inside class!" << endl;
   }
   void outsideMethod();
   // parameter aslo can be added
   int rank(int minrank);
};

// outside
void secClass::outsideMethod() {
 cout << "This is method from outside class!" << endl;
};

// parameter added
int secClass::rank(int minrank) {
 return minrank;
}

// Constructors 
// it calls when object of class created
class rdClass{
 public:
  rdClass() {
   cout << "This is contructor inside class!" << endl;
  }
  // you also can use it with parameter
  string model;
  rdClass(string x){
   model = x;
  }
};

// it also can be define outside class
class rdClass2{
 public:
  string series;
  rdClass2(string y);
};

// class parameter outside
rdClass2::rdClass2(string y){
 series = y;
}

int main(){
 myClass myObj; // creating object of myClass

 // Object of class is use for access attribute and set Value;
 myObj.myString = "This is string call from inside class";
 myObj.myInt = 100;
 
 // cout attribute from myClass
 cout << myObj.myString << endl << myObj.myInt << endl;
  
 // Cout Class Methods	
 secClass secObj;
 secObj.insideMethod();
 secObj.outsideMethod();

 // Cout Parameter
 cout << secObj.rank(10) << endl;
 
 // cout constructor 
 rdClass rdObj;

 // cout constructor with parameter
 rdClass rdObj2("MSI");
 cout << rdObj2.model << endl;

 // cout constructor with parameter outside
 rdClass2 rdObj3("G Series");
 cout << rdObj3.series << endl;
 
return 0;
}
