#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int idade;

	printf("\nVoce e apto a ir ao Show?\n");
	printf(" #Qual sua idade? ");
	scanf("%d", &idade);

	if (idade >= 18){
	   printf("\n Sua idade e: %d", idade);
	   printf(" - VOCE ESTA APTO!\n");
	   printf("\n #BOM DIVERTIMENTO!!!\n");
    }
    else {
    	printf("\n Sua idade e: %d", idade);
    	printf(" - VOCE NAO ESTA APTO!\n");
	   printf("\n #COMPRA NAO PERMITIDA!!!\n");
	}

    printf("\nObrigado!\n\n");


	system("pause");
	return 0;
}
