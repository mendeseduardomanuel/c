#include <stdio.h>
#include <stdlib.h>

int somar(int v1, int v2){
	
	int res;
	res = v1 + v2;
	
	return res;
}


int main(int argc, char *argv[]) {

int n1,n2,soma;

printf("Digite o primeiro valor \n");
scanf("%d", &n1);
printf("Digite o segundo valor \n");
scanf("%d", &n2);
soma = somar(n1,n2);

printf("%d",soma);
	return 0;
}
