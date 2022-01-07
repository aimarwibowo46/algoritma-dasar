#include <stdio.h>

/*	
int main()
{
	int i;
	for (i = 1; i <= 6; i++) {
		printf("%d\n", i);
		//   Jika i adalah 4, maka keluar dari perulangan
		if (i == 4) {
			break;
		}
	}
	return 0;
*/


int main()
{
	int i;
    for (i = 1; i <= 6; i++) {
	    // Jika i adalah 4, maka abaikan perintah printf()
        if (i == 4) {
            continue;
        }
        printf("%d\n",i);
    }

    return 0;

	
}
