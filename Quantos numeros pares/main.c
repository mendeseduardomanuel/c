#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sequencia[8];
	int i,j;
	
	for(i=0;i<8;i++){
		printf("Insira o avlor %d", i+1);
		scanf("%d",&sequencia[i]);
	}
	
	for(i=0;i<8;i++){
		if(sequencia[i] % 2 == 0){
			j++;
		}
	}
	
	printf("O vetror tem %d ", j);
	return 0;
}
