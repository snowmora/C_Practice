#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//Integrantes: Gabriel Dib, Lucas de Moraes, Vinicius Schiavo Alves
int main() {
    
    int codigo[10], quantidade[10], busca, achou = 0, total = 0, opt;
    float preco[10];
    
    do {
        printf("\n\n##MENU DE OPCOES##\n");
        printf("\ncadastrar produtos[1]");
        printf("\nlistar produtos[2]");
        printf("\nbuscar produto pelo codigo[3]");
        printf("\nsoma total do estoque[4]");
        printf("\nsair[5]\n");
        scanf("%i", &opt);
    switch (opt) {
        case 1:
            printf ("\n##CADASTRO DE PRODUTO##\n");
            for (int i = 0; i < 10; i++) {
                printf ("add codigo produto[%i]: ", i + 1);
                scanf ("%i", &codigo[i]);
                printf ("add quantidade produto[%i]: ", i + 1);
                scanf ("%i", &quantidade[i]);
                printf ("add preco produto[%i]: ", i + 1);
                scanf ("%f", &preco[i]);
            }
        break;
        case 2:
            for (int i = 0; i < 10; i++) {
                printf ("\ncodigo produto[%i]: %i", i + 1, codigo[i]);
                printf ("\nquantidade produto[%i]: %i", i + 1, quantidade[i]);
                printf ("\npreco produto[%i]: %.2f", i + 1, preco[i]);
            }
        break;
        case 3:
            printf ("\n#insira o codigo do produto para busca: ");
            scanf ("%i", &busca);
            for (int i = 0; i < 10; i++){
                if (busca == codigo[i]) {
                printf ("\nquantidade produto[%i]: %i", i + 1, quantidade[i]);
                printf ("\npreco produto[%i]: %.2f", i + 1, preco[i]);
                achou = 1;
                }
            }
            if (achou == 0) {
                printf ("\n\n##CODIGO INVALIDO##\n");
            }
        break;
        case 4:
            printf ("##soma valor estoque total##");
            for (int i = 0; i < 10; i++) {
                total += quantidade[i] * preco[i];
            }
            printf ("\n%i", total);
        break;
        case 5:
            printf ("\n##TCHAU##");
        break;
        default:
            printf ("\n##OPCAO INVALIDA##");
        break;
    }
    } while (opt != 5);
    
    return 0;

}