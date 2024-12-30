#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,k;
	int matriz[3][2][4] = {
		{
		{1 ,2 ,3 ,4 },
		{5 ,6 ,7 ,8 },
		{9 ,10 ,11 ,12 }	
		},
		{
		{13 ,14 ,15 ,16 },
		{17 ,18 ,19 ,20 },
		{21 ,22 ,23 ,24 }
		}
	};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			//printf("\nEstamos na dimensão %d\n",j+1);
			for(k=0;k<4;k++){
				printf("Matriz[%d][%d] = %d ",i,j,k,matriz[i][j][k]);
			}
		}
	}
	
	return 0;
}
