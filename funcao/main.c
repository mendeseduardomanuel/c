#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char vogal( char c){
	
	if(c == 'a' || c == 'e' || c== 'i' || c == 'o' || c== 'u'){
	return 0;
	}else{
	return 1;
	}
}

int main(int argc, char *argv[]) {
	char l,n;
	printf("Insara uma letra");
	scanf("%c",&l);
	n=vogal(l);
	printf("%c",n);
	
	return 0;
}
