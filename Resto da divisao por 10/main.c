#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,d;
	printf("\n Digite um numero");
	scanf("%d",&n);
	while(n != 0){
		d = n%10;
		n /=10;
		printf("%u",d);
	}
	return 0;
}
