#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 void equacao(float a, float b, float c){
 	float del, x1,x2;
del = b*b - 4 * a * c;
if(del > 0){
	x1 = -b +sqrt(del)/2*a;
	x2 = -b -sqrt(del)/2*a;
	printf("X1= %f e X2= %f",x1,x2);
}else if(del < 0){
	x1= -b / 2*a;
	printf(" A equacao tem apenas uma Araiz X1=%f",x1);
}else{
	printf("Não eposivel\n");
}
 }

int main(int argc, char *argv[]) {
	float a,b,c;
	printf("Digite o valor de a\n");
	scanf("%f",&a);
	printf("Digite o valor de b\n");
	scanf("%f",&b);
	printf("Digite o valor de c\n");
	scanf("%f",&c);
	
	equacao(a,b,c);
	return 0;
}
