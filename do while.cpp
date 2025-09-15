#include <stdio.h>

int main(){
	float NOTA, SOMA = 0;
	
	do{
		printf("\n Informe a nota: ");
		scanf("%f", &NOTA);
	} while(NOTA>=0 && NOTA <=10);
	printf("\n A soma das nota digitaass %.2f", SOMA);
				
}