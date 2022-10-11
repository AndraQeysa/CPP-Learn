// iostream untuk library output input
#include <iostream>
// c++ using std for cout cin etc
using namespace std;

int main(){
// cout untuk command output, endl (end line)
cout << "HELLO WORLD" << endl;

int a;
cout << "MASUKKAN NILAI A : " << endl;
// cin untuk command input
cin >> a;
cout << "NILAI A : " << a << endl;

string nama;
cout << "MASUKKAN NAMA : " << endl;
cin >> nama;
cout << "NAMA ANDA ADALAH : " << nama << endl;

// Percabangan
// if else
if ( a % 2 == 0) {
cout << a << " MERUPAKAN ANGKA GENAP!" << endl;
} else {
cout << a << " MERUPAKAN ANGKA GANJIL!" << endl;
}

// switch
switch(a){
case 10 : cout << "INPUT ANGKA MASUK KATEGORI SUPER JACKPOT" << endl;
	break;
case 5 : cout << "INPUT ANGKA MASUK KATEGORI JACKPOT" << endl; 
	break;
default : cout << "INPUT ANGKA MASUK KATEGORI NORMAL" << endl;
	break;
}

// perulangan 
// for
int b;
cout << "Masukkan Nilai : " ;
cin >>  b;
for (int i = 0; i < b; i++){
 cout << "*" << endl;
}

//while
while( b <=10) {
cout << "Hello" << endl;
b++;
}

// do while
cout << "NILAI C ";
int c;
cin >> c;
do {
cout << "WORLD" << endl;
c--;
} while (c > 1);

return 0;
}
