#include <iostream>
using namespace std;

int main() {
	// arrays
//	string book[3] = {"Bahasa","Math","Sains"};
//	// sizeof(a)/sizeof(a[x]) salah satu cara mencari panjang arrays
//	int arr = sizeof(book)/sizeof(book[0]);
//	
//	for(int a = 0; a <arr; a++){
//		cout << book[a] << endl;
//	}
//

	//multi dimensional arrays
	
//	int number[2][2] = {{1,4},{2,3}};
//	cout << number[1][0];

	int num[5][3]={{11,23,32},{41,55,63},{72,89,12},{15,24,61},{90,98,80}};
	int arr =sizeof(num)/sizeof(num[0]);
	int narr = sizeof(num[0])/sizeof(num[0][0]);
	
	for (int i=0; i <arr; i++){
		for(int j=0; j <narr; j++){
			cout << "num [" << i << "][" << j <<"] = " << num[i][j] <<endl;
		}
	}
	return 0;
	
}
