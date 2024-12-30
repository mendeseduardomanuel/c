#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int matriz[3][2][3];
	
	for(i=0;i<3;i++){
		printf("Estamos na matriz %d\n",i+1);
		for(j=0;j<3;j++){
			printf("Insira o valor %d: ",j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",matriz[i][j]);
		}
	}
	return 0;
}
