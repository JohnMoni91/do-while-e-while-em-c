#include <stdio.h>

int main(){
	int RESP, IDADE;
	
	printf("Deseja 0 entrar no programa? ");
	scanf("%d", &RESP);
	
	while(RESP == 0)
	{
		printf("\n Informe a sua idade ");
		scanf("%d", &IDADE);
		printf("Deseja '0' para continuar no programa ");
		scanf("%d", &RESP);
	}			
}