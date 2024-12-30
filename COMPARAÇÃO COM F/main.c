#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int comparacao(int a,int b){
	if(a > b){
		return a;
	}else{
		return b;
	}
}

int main(int argc, char *argv[]) {
	int a,b,maior;
	printf("Digite o primeiro valor \n");
	scanf("%d",&a);
	printf("Digite o segundo valor\n");
	scanf("%d",&b);
	
	maior = comparacao(a,b);
	printf("O maior valor eh %f :",maior);
	return 0;
}
