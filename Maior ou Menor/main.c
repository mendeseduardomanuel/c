#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float maior(float n1, float n2){
	if(n1 > n2){
		return n1;
	}else
	return n2;
}

int main(int argc, char *argv[]) {
	float x,y,m;
	
	printf("Digite o pri\n");
	scanf("%f",&x);
	printf("Digite o seg\n");
	scanf("%f",&y);
	
	m = maior(x,y);
	
	printf("O maior valor eh %f",m);
	return 0;
}
