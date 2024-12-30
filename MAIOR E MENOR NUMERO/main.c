#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[6]={1,0,5,-2,-5,7}, soma=0;
	soma=A[0]+A[1]+A[5];
	A[4]=100;
	printf("%d",soma);
	printf("%d",A[0]);
	printf("%d",A[1]);
	printf("%d",A[2]);
	printf("%d",A[3]);
	printf("%d",A[4]);
	printf("%d",A[5]);
	return 0;
}
