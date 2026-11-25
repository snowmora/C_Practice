//6. Receber  12  números  e  armazená-los  em  um  vetor.  Ao  final,  exibir  a 
//quantidade de números negativos informados. 

#include <stdio.h>
#include <stdlib.h>

	int main (){

	int vetor[12];

	for (int i = 0; i < 12; i++){
		printf("insira um numero para armazenar em vetor[%i]: ", i);
		scanf("%i", & vetor[i]);
	}
		printf("\nOs numeros positivos armazenados nos vetores foram:\n");
	for (int i = 0; i < 12; i++) {
		if (vetor[i] < 0) {
		printf("\n%i ", vetor[i]);
		}
	}
return 0;
}