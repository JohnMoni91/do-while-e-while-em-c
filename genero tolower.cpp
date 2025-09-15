#include <stdio.h>
#include <string.h> // comando de string
#include <ctype.h> // comando tolower (converte pra minusculo letra por letra)

int main(){
	char genero[10];
	int i;
	
	printf("Digite a palavra: ");
	scanf("%s", genero);
	
	for (i = 0; i < 10; i++){
		genero [i] = tolower (genero[i]); //letra por letra da cadeia. E tem o inverso, o toupper
	}
	printf("\n%s\n", genero);			
}