#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fibonacci(int n, int sequencia[]){
	int i;
	sequencia[0]=1;
	sequencia[1]=1;
	for(i=2;i<n;i++){
		sequencia[i]=sequencia[i-1]+sequencia[i-2];
	}
}

int soma(int n,int sequencia[]){
	int i;
	int soma=0;
	for(i=0;i<3;i++){
		soma+=sequencia[i];
	}
	return soma;
}

long long produto(int n,int sequencia[]){
	int i;
	long long produto=1;
	for(i=n-1;i>=3;i--){
		produto *=sequencia[i];
	}
	return produto;
}

int main(int argc, char *argv[]) {
	int i,n;
	printf("\n Insira o limite da sequencia");
	scanf("%d",&n);
	int sequencia[n];
	fibonacci(n, sequencia);
	printf("\nA sequencia:");
	for(i=0; i<n; i++){
		printf(" %d ", sequencia[i]);
	}
	printf("\n A soma eh%d:",soma(n,sequencia));
	printf("\n O produto eh%d:", produto(n,sequencia));
	
	return 0;
}
