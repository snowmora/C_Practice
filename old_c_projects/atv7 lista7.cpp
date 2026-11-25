//7. Preencher automaticamente um vetor com todos os números pares entre 1 
//e 100 e depois exibir os números para o usuário. 

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vetor[50], pair = 0, i;
	
	printf ("\n...adicionando automaticamente os numeros pares entre 1 e 100 aos indices do vetor...");
	
	for (int i = 1; i <= 100; i++){
		if (i % 2 == 0) { // LEMBRANDO QUE % É O CALCULO DO RESTO DA DIVISAO
			vetor[pair] = i;
			pair++;
			}
		}
		
	for (int i = 0; i < pair; i++){
		printf("\n%i", vetor[i]);
	}
	
	return 0;
}