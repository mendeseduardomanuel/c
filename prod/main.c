#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n[10];
	int m[10];
	int i;
	
	for(i=0; i<10; ++i){
		printf("Insira o valor:");
		scanf("%d",&n[i]);
	}
	for(i=0; i<10;++i){
	m[i]= n[i]*n[i];
	printf("O resultado eh %d:",m);


	}
	
	return 0;
}
