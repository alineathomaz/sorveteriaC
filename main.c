#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	do{
		printf("\n Digite o numero que corresponde ao sabor do sorvete: \n");
		
		printf("\t (1) ...flocos \n");
		printf("\t (2) ...morango \n");
		printf("\t (3) ...leite condensado \n");
		
		scanf("%d", &i);
		
	}while((i<1)|| (i>3));
	
	switch(i){
		case 1:
			/* \t dá um tab no texto */
			printf("\t\t Vc escolheu flocos");
			break;
			
		case 2:
			printf("\t\t Vc escolheu morango");
			break;
		
		case 3:
			printf("\t\t Vc escolheu leite condensado");
			break;
			
	}
	return 0;
}