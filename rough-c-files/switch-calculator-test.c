#include <stdio.h>
#include <math.h>

int main () {

float n1,n2;
char op;
printf("Digite a expressao: ");
scanf("%f %c %f", &n1, &op, &n2);
switch(op) {
    case '+': 
        printf("\nResultado: %.2f\n\n", n1+n2);
    break;
    case '-':
        printf("\nResultado: %.2f\n\n", n1-n2);
    break;
    case '*': 
        printf("\nResultado: %.2f\n\n", n1*n2);
    break;
    case '/': 
        if (n2!=0)
            printf("\nResultado: %.2f\n\n",n1/n2);
        else
            printf("\nNao existe divisao por zero\n\n");
    break;
    case '^': 
        printf("\nResultado: %.2f\n",pow(n1,n2)); //math.h
    break;
    default: 
        printf("\nOperador invalido\n\n");
    break;
}
}