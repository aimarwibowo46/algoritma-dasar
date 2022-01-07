#include <stdio.h>

int main() {
	
	int biner[10];
	int i;
	int j;
	int n;
	
	scanf("%d", &n);
	
	for(i=0;  ; i++) {
		biner[i]=n%2;
		n=n/2;
		j=i;
		if(n==0) {
			break;
		}
	}
	
	for(j=i; j>=0; j--) {
		printf("%d", biner[j]);
	}
	
return 0;
}
