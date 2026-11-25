#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // para usar tolower

int main () {

    char sn;
    int opt; // ham, piz, ref;  acabei n usando essas 3
    float total = 0;

    printf ("DESEJA PEDIR?[s/n]: ");
    scanf (" %c", &sn);
    sn = tolower(sn);

    while(sn == 's') {

    printf ("\n\n##CARDAPIO##");
    printf ("\nHamburguer R$10 [1]");
    printf ("\nPizza R$15 [2]");
    printf ("\nRefrigerante R$5 [3]");
    printf ("\n\nInsira a opcao desejada: ");
    scanf("%i", &opt);

    switch (opt) {
        case 1: 
            total = total + 10;
            printf ("\nHamburguer +R$10 adicionado\n");
        break;

         case 2: 
            total = total + 15;
            printf ("\nPizza +R$15 adicionado\n");
        break;

         case 3: 
            total = total + 5;
            printf ("\nRefrigerante +R$5 adicionado\n");
        break;

        default:
            printf ("\n##OPCAO INVALIDA##\n");
        break;

        }
        printf ("\nPreco total do pedido: %.2f", total);
        printf ("\n\nDESEJA MAIS ALGUMA COISA?[s/n]:");
        scanf (" %c", &sn);
        sn = tolower(sn);
    }
    
    printf ("##ATE MAIS##");
    printf ("Total da conta a pagar: %f", total);
    return 0;

}