#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma(int n1,int n2){
	int s;
	s=n1+n2;
	
	return s;
}

int main(int argc, char *argv[]) {
	int s,n1,n2;
	printf("Insira o primeiro valor para a soma\n");
	scanf("%d",&n1);
	printf("Insira o segundo valor\n");
	scanf("%d",&n2);
	
	s = soma(n1,n2);
	printf("%d",s);
	return 0;
}
