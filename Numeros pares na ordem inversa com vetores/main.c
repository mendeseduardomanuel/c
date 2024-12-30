#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sequencia[6];
	int n,i;
	
	printf("\nInsira 6 numeros pares\n");
	while(i<6){
		printf("Insira o valor %d\n",i+1);
		scanf("%d",&n);
		if(n % 2 == 0){
			sequencia[i]=n;
			i++;
		}else{
			printf("Insira um numero par");
		}
	}
	
	for(i=6-1;i>=0;i--){
		printf(" %d ",sequencia[i]);
	}
	return 0;
}
