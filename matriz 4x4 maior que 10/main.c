#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sequencia[4][4];
	int i,j,k;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Elementos[%d][%d]",i+1,j+1);
			scanf("%d",&sequencia[i][j]);
			
			if(sequencia[i][j] > 10){
				k++;
			}
		}
	}
	
	printf("A matriz possui %d numero maiores que 10",k);
	return 0;
}
