#include <stdio.h>
#include <ctype.h> //add a funcao tolower e mais

int main () {

    int codigo[4],idade[4];
    float salario[4];
    int busca, achou;
    char opt;
    
    printf ("*#~CADASTRO ATIVIDADE~#*");

    for (int i = 0; i < 4; i++) {
        printf ("\n-----------------------------\ncadastro codigo usuario[%i]: ", i + 1 );
        scanf ("%i", &codigo[i]);

        printf ("\ncadastro idade usuario[%i]: ", i + 1);
        scanf ("%i", &idade[i]);
        
        printf ("\ncadastro salario usuario[%i]: ", i + 1);
        scanf ("%f", &salario[i]);
        }
    
    printf ("\n\n## AMOSTRAGEM DE CADASTROS ##\n");

    for (int i = 0; i < 4; i++){
        printf ("\n-----------------------------\nusuario cadastrado codigo [%i]: %i ", i + 1, codigo[i]);
        
        printf ("\nusuario cadastrado idade [%i]: %i anos", i + 1, idade[i]);
        
        printf ("\nusuario cadastrado salario [%i]: R$%.2f ", i + 1, salario[i]);
        }
    
        fflush(stdin); //funciona apenas em compiladores do windows

    printf ("\n\nREALIZAR PESQUISA DE USUARIO?[s/n]: ");
    scanf(" %c", &opt); //como o fflush n funciona no linux, utilizei o espaco antes do %c (tambem resolve o input do buffer)
    
    do {
    
    if (opt == 's') {
        printf ("\n\n## PESQUISA DE USUARIOS ##\n");
        printf ("\nInsira o codigo do cadastro desejado: ");
        scanf ("%i", &busca);

        achou = 0;

    for (int i = 0; i < 4; i++) {

        if (busca == codigo[i]) {
            printf ("\ncadastro número %i", i + 1);
            printf ("\ncodigo: %i", codigo[i]);
            printf ("\nidade: %i anos", idade[i]);
            printf ("\nsalario: R$%.2f", salario[i]);
        
            achou = 1;
            break;
        }
        }
        
        if (achou == 0) { // tambem poderia ser if (!achou) ! significa (not)
        
            printf ("\n##ERRO CODIGO INVALIDO##");
        
        }

    fflush(stdin); //same as before
    printf ("\nDeseja continuar?[s/n]: ");
        scanf (" %c", &opt); //same as beforee

    }
    } while (opt == 's');

    printf("\n\n***OBRIGADO POR USAR***");


    return 0;

}