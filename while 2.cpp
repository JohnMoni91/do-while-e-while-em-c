#include <stdio.h>

int main(){
	int IDADE;
	char RESP;
	
	printf("Deseja 's' entrar no programa? ");
	scanf(" %c", &RESP);
	
	while(RESP == 's' || RESP == 'S')
	{
		printf("\n Informe a sua idade ");
		scanf("%d", &IDADE);
		printf("Deseja 's' para continuar no programa ");
		scanf(" %c", &RESP);
	}			
}