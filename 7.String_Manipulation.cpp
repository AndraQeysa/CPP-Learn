#include <iostream>
using namespace std;

int main(){
string nama_Depan;
string nama_Belakang;
cout << "MASUKKAN NAMA DEPAN" << endl;
cin >> nama_Depan;
cout << "MASUKKAN NAMA BELAKANG" << endl;
cin >> nama_Belakang;

// Menggabungkan (Concatenation)
cout << "NAMA LENGKAP" << endl << nama_Depan +" "+ nama_Belakang << endl;

// String length
cout << "Panjang String Nama Depan = " << nama_Depan.size() << endl;

// Menggambil char di String
cout << "Huruf ke 2 di Nama Belakang = " << nama_Belakang[1] << endl;;

// Special Characters
string txt = "Kita adalah \'Mahasiswa\' dari \"ITTP\" \\ Institut Telkom Purwokerto";
cout << txt << endl;
return 0;
}
