#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=0,c;
	
	for(c; c <= 255; c++){
		printf("\n%c ==> %d", c, c);
		n++;
		if(n==23){
			printf("Precione uma tecla...");
			n=0;
			getch();
		}
	}
	return 0;
}
