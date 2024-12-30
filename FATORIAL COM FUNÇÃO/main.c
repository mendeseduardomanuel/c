#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fatorial(int n){
	if(n==0 || n== 1){
		return 1;
	}else{
		return n * fatorial(n-1);
	}
}

int main(int argc, char *argv[]) {
	int n;
	printf("Digite o valor para calcular o fatorial\n");
	scanf("%d",&n);
	if(n < 0){
		printf("Nao existe fatorila de numero negativo\n");
	}else{
		int fat = fatorial(n);
		printf("O fatorial de %d eh %d",n,fat);
	}
	return 0;
}
