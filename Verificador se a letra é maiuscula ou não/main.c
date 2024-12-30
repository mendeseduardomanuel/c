#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
 void verificador(char letra){
 	if(letra >= 'A' && letra <='Z'){
 		printf("A letra '%c' eh maiuscula.\n",letra);
 		
	 }else if(letra >= 'a' && letra <= 'z'){
	 	printf("A letra '%c' eh menuscula\n",letra);
	 }else{
	 	printf("O caracter inserido não eh letra\n");
	 }
 }

int main(int argc, char *argv[]) {
	char letra;
	
	printf("Digite uma letra para verificar\n");
	scanf("%c",&letra);
	verificador(letra);
	return 0;
}
