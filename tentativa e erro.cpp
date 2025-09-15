#include <stdio.h>
#include <locale.h>

int main(){
	   int senha, cont;
	   cont = 1;
	   
	   setlocale(LC_ALL, "Portuguese");
	   
	   printf("\n Olá. Por favor, digite sua senha; ");
	   scanf("%d", &senha);
	   
	   while((senha != 123456) && (cont<3))
	   {
		   printf("\n senha incorreta, tente novamente");
		   scanf("%d", &senha);
		   cont++
	   } if (senha == 123456);
	   printf("\n Oba, você acertou!")		

}