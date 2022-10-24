#include <iostream>
using namespace std;

// function harus di decelarasi sebelum main function 
// void artinya tidak memiliki nilai kembali
void myFunction() {
cout << "Function pertama" << endl;
}

// parameters / arguments
void nama(string fnama){
//fnama adalah parameter
cout << fnama << " Makoto" << endl;
}

// default parameter
void umur( int age = 53) {
cout << age << endl;
}

// multiple parameter
void stats(string name, int age) {
cout << name << " Makoto. " << age << " years old." << endl; 
}

// return value

int hitung(int x) {
return 100 / x ;
}

int kali(int y, int z) {
return y * z;
}

// reference
void swap(int &a , int &b){
int c = a;
a = b;
b = c;
}

// pass arrays
void arrays(int arr[4]){
for (int i = 0; i <4; i++){
cout << arr[i] << endl;
}
}

// overloading
double kali2 (double y, double z) {
return y * z;
}

// recursion is a way for function calling it self easy exemple is sum
int sum (int s) {
 if (s > 0 ) {
 return s + sum(s - 1);
 } else {
 return 0;
 }
}



int main(){
myFunction();
nama("Katherina");
umur();
nama("Ryun");
umur(18);

stats("Eiji", 18);

cout << hitung(5) << endl;

int z = kali(9,8);
cout << "Kali awal " << z << endl;

int g1 = 12;
int g2 = 13;
swap(g1,g2);
cout << "g1 = " << g1 << " " << "g2 = " << g2 << endl;

int arr[4] = {13,123,1232,142};
arrays(arr);

double z2 = kali2(9.7, 8.6);
cout << "Kali overload " << z2 << endl;

int result = sum(7);
cout << "sum " << result << endl; // shoult give result of 7! 


return 0;
}


