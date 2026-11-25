#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//biblioteca


int main () {
	
	printf("atividade pratica algoritimos e programacao!\n");
	
	
	
	int valor;
	valor = 100;
	
	system("pause");
	
	float valor_d;
	valor_d = 7.5;
	
	char letra;
	letra = 'b';
	
	
	printf("valor e igual a %i, certo.\n", valor);
	
	printf("valor decimal e igual a %.1f, correto! \n", valor_d);
	
	printf("var letra representa %c, boa!\n", 'b');
		
	
	int idade;
	printf("Digite sua idade: ");
	
	scanf("%i", &idade); // Le um inteiro e armazena em 'idade'
	
	printf("certo, voce tem %i anos.", idade);
	
	
	return 0;
}