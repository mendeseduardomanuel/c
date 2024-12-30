#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sequencia[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("Insira o valor %d\n",i+1);
		scanf("%d",&sequencia[i]);
	}
	
	for(i=10-1; i>=0; i--){
		printf(" %d ", sequencia[i]);
	}
	return 0;
}
