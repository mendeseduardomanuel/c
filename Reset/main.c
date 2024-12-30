#include <stdio.h>
#include <stdlib.h>
#define max_nome 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

char nome [max_nome][50];
int i,j,temp;

for(i=0; i<max_nome; i++){
	printf("Insira o %d",i+1);
	scanf("%s",&nome[i]);
}
	return 0;
}
