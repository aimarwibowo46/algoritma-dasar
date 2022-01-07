#include <stdio.h>

double exponentiate1(double x, int n) {
	 double P;
	 
	 while ((n & 1) == 0) {
		 x = x * x;
		 n >>= 1;
	 }
	 P = x; // p untuk menampung nilai dari kelebihan pangkat 1 saat pembagian pangkat ganjil
	 n >>= 1;
	 
	 while (n > 0) {
		 x = x * x;
		 if ((n & 1) != 0)
		 P = P * x;
		 n >>= 1;
	 }
	 return P;
 }
 
 int main() {
 	
return 0;
 }

