#include <iostream>
using namespace std;

int fpb(int x, int y) {
	
	int res;
	for(int i = 1; i <= x && i <= y; i++) {
		if(x % i == 0 && y % i == 0) {
			res = i;
		}
	}
	return res;
}

int fpb_rekursif(int x, int y) { // algoritma euclid
	
	if(x % y == 0) return y;
	return fpb_rekursif(y, x % y);
}

int kpk(int x, int y) {
	
	return x * y / fpb(x, y); 
}

int main() {
	
	cout << fpb(48, 30) << endl;
	cout << fpb_rekursif(48, 30) << endl;
	cout << kpk(12, 15) << endl;
	
	return 0;
}
