#include <iostream>
using namespace std;

int main() {
	const int max = 5;
	
	for(int i = 0; i < max; i++) {
		cout << i << endl;
	}
	
	/* tidak ada hasil int karena i lebih dari max yaitu 5
	for(int i = 6; i < max; i++) {
		cout << i << endl;
	}
	*/
	
	return 0;
}
