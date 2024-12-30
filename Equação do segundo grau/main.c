#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	float d,x1,x2;
	
	printf("Digite o valor de a\n");
	scanf("%f",&a);
	printf("Digite o valor de b\n");
	scanf("%f",&b);
	printf("Digite o valor de c\n");
	scanf("%f",&c);
	
	d = b * b - 4 * a * c;
	
	if(d > 0){
		x1= -b +sqrt(d)/2*a;
		x2= -b -sqrt(d)/2*a;
		printf("X1=%f e X2=%f\n",x1,x2);
	}else if(d < 0){
		x1= -b/2*a;
		printf("A equacao temk apenas uma raiz eh X=%f",x1);
	}else{
		printf("Nao eh possivel");
	}
	return 0;
}
