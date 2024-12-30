#include <stdio.h>
#include <stdlib.h>

int subtracao(int v1, int v2){
	int res = v1 - v2;
	return res;
}
int main(int argc, char *argv[]) {
	
	int n1,n2,sub;
	
	printf("Digite o primeiro valor\n");
	scanf("%d",&n1);
	printf("Digite o segundo valor\n");
	scanf("%d",&n2);
	
	sub = subtracao(n1,n2);
	
	printf("%d",sub);
	return 0;
}
