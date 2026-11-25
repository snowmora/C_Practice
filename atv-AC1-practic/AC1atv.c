#include <stdlib.h>
#include <stdio.h>

void calcularEstatisticas(int *vetor, int tamanho, int *maior, int *menor, float *media);


int main(){

    int *dyp, qtd, Vmaior, Vmenor;
    float media;

    printf("insira o tamanho do vetor(qtd): ");
    scanf("%d", &qtd);

    dyp = (int *)malloc(qtd * sizeof(int));
    
    if (dyp == NULL){
        printf("\n##erro 6767: falta de memória##\n");
        exit(1);
    }
    
    for (int i=0; i < qtd; i++){
        printf("\ndigite o valor na posição de numero %i : ", i);
        scanf("%d", dyp+i);
    }

    calcularEstatisticas(dyp,qtd,&Vmaior,&Vmenor,&media);

    printf("\nMaior valor adicionado: %d", Vmaior);
    printf("\nMenor valor adicionado: %d", Vmenor);
    printf("\nMedia dos valores adicionados: %.2f", media);

    free(dyp);
}

void calcularEstatisticas(int *vetor, int tamanho, int *maior, int *menor, float *media)
{
    int i;
    float soma = 0;
    *maior = *vetor;
    *menor = *vetor;
    
    for(i=0; i<tamanho; i++){
        if(*maior < *(vetor + i))
        *maior = *(vetor + i);
        if(*menor > *(vetor + i))
        *menor = *(vetor + i);
        soma = soma + *(vetor +i);
    }

    *media = soma / tamanho;
}


