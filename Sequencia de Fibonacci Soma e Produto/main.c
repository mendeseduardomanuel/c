#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n, int sequencia[]){
	
	int i;
	sequencia[0]=1;
	sequencia[1]=1;
		
	for(i = 2; i < n; i++){
		sequencia[i] = sequencia[i-1] + sequencia[i-2];
	}
}

int soma(int n, int sequencia[]){
	
	int soma = 0, i;
	for(i = 0; i < 3; i++){
		soma += sequencia[i];
	}
	return soma;
}

long long produto(int n, int sequencia[]){
	
	long long produto = 1;
	int i;
	for(i = n - 1; i >= 3; i--){
		produto *= sequencia[i];
	}
	return produto;
}


int main(int argc, char *argv[]) {
	int i,n;
	
	printf("Digite o limite da sequencia\n");
	scanf("%d",&n);
	int sequencia[n];
	
	fibonacci(n,sequencia);
	printf("A sequencia de fibonacce\n");
	for(i = 0; i < n; i++){
		printf(" %d ", sequencia[i] );
	}
	
	puts("\n");
	
	printf("\nA soma dos primeiros termos da funcao eh %d\n",soma(n,sequencia));
	printf("\nO produto dos ultimos termos eh %d\n",produto(n,sequencia));
	
	
	return 0;
}
