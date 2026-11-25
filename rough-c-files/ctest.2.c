//2. Receber 10 números e armazená-los em um vetor. Ao final, exibir os
//números na ordem inversa da que foram recebidos

#include <stdio.h>
#include <stdlib.h>

int main () {

int vetor[10];

for (int i = 0; i < 10; i++) {
	printf("\nDigite um numero [%d]: ", i);
	scanf("%d", &vetor[i]);
}
for (int i=0; i < 10; i++) {
	printf("\n%d", vetor[i]);	
	
}

	
return 0;

}