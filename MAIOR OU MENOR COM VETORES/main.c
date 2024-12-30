#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sequencia[10];
	int i,maior,menor;
	
	maior= sequencia[0];
	menor= sequencia[0];
	
	for(i=0; i<10;i++){
		printf("Insira o valor: %d\n",i+1);
		scanf("%d",&sequencia[i]);
	}
	
	for(i=1;i<10;i++){
		if(sequencia[i] > maior){
			maior = sequencia[i];
		}
		if(sequencia[i] < menor){
			menor = sequencia[i];
		}
	}
	
	printf("O maior numero eh : %d\n",maior);
	printf("O menor numro eh : %d\n",menor);
	return 0;
}
