#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float divisao (int n1, int n2){
	int div;
	if(n1 > n2 && n1 > 0){
		div=n1/n2;
	}else{
		printf("Adivisão não é possivel");
	}
	return div;
}

int main(int argc, char *argv[]) {
	int n1,n2,div;
	printf("Digite o valor\n");
	scanf("%f",&n1);
	printf("Digite o segundo valor\n");
	scanf("%f",&n2);
	div = divisao(n1,n2);
	printf("%f",div);
	return 0;
}
