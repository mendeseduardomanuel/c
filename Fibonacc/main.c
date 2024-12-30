#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int n,i,soma=0;

printf("Insira o limite\n");
scanf("%d",&n);

int sequencia[n];

sequencia[0]=1;
sequencia[1]=1;

printf("A sequencia de fibonacc:");
for(i=2; i<n;i++){
	sequencia[i]=sequencia[i-1]+sequencia[i-2];
}

for(i=0;i<n;i++){
	printf(" %d ",sequencia[i]);
}

for(i=0; i<3; i++){
	soma+=sequencia[i];
}
printf("\nA soma eh: %d ",soma);

long long produto=1;
for(i=n-1;i>=3;i--){
	produto*=sequencia[i];
}
printf("\nO produto eh:%d",produto);
	return 0;
}
