#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int soma(int n, int sequencia[]){
		int s,i;
		for(i=0;i<n;i++){
			s+=sequencia[i];
		}
		return s;
	}
int main(int argc, char *argv[]) {
	
	int n,i,r;
	printf("Insira o numero de valores a somar\n");
	scanf("%d",&n);
	
	int sequencia[i];
	for (i=0;i<n;i++){
		printf("Insira o %d\n: ", i+1);
		scanf("%d",&sequencia[i]);
	}
	
	r= soma(n,sequencia);
	
	printf("A soma dos valores eh: %d",r);
	
	
	return 0;
}
