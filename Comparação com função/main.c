#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int maior(int sequencia[]){
	if(sequencia[0]>sequencia[1]){
		return sequencia[0];
	}else{
		return sequencia[1];
	}
}

int main(int argc, char *argv[]) {
	int m, i,sequencia[2];
	for(i=0;i<2;i++){
		printf("Digite o %d\n: ", i+1);
		scanf("%d",&sequencia[i]);
	}
	m= maior(sequencia);
	printf("O maior numero eh%d",m);
	return 0;
}
