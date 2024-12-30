#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int multiplica(int n1, int n2){
	int res;
	res = n1*n2;
	return res;
}

int main(int argc, char *argv[]) {
	
	int n1,n2,s;
	printf("Insira o primeiro valor\n");
	scanf("%d",&n1);
	printf("Insira o segundo valor\n");
	scanf("%d",&n2);
	
	s=multiplica(n1,n2);
	
	printf("%d",&s);
	return 0;
}
