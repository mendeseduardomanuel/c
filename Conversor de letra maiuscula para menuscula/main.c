#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void maiuscula(char letra){
	if(letra >= 'A' && letra <= 'Z'){
		return letra - ('a'-'A');
	}else{
		return letra;
	}
}

void menuscula(char letra){
	if(letra >= 'a' && letra <= 'z'){
		return letra + ('a'-'A');
	}else{
		return letra;
	}
}

int main(int argc, char *argv[]) {
	char letra,op;
	
	printf("Insira a letra (M para maiuscula, e m para menuscula):");
	scanf("%c",&op);
	
	if(op=='M'){
		printf("Digite uma letra maiuscula\n");
		scanf("%c",&letra);
		char maiusculas = maiuscula(letra);
	}else if(op=='m'){
		printf("Digite uma letra menuscula\n");
		scanf("%c",&letra);
		
		char = menuscula(letra);
	}else{
		printf("Opção invalida\n");
	}
	
	if(op=)
	return 0;
}
