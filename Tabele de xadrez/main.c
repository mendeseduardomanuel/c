#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int lin, col,n;
	clrscr();
	printf("\n Qual é o tamanho do tabuleiro?");
	scanf("%d",&n);
	
	for(lin = 1; lin <= n; ++lin){
		printf("\n");
		for(col = 1; col <= n; ++col){
			if( (lin+col)%2 == 0 ) textcolor(YELLOW);
			else textcolor(GREEN);
			cprintf("%c%c",219,219);
		}
	}
	getch();
	return 0;
}
