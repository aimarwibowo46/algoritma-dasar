#include <stdio.h>

int fastExp(int a, int b) {
	int res=1;
	while(b>0) {
		if(b%2==1) {
			res = res * a;
		}
		a = a * a;
		b = b / 2;
	}
	return res; 
}

int main() {
	
	printf("%d\n", fastExp(3, 4));
	
	return 0;
}
