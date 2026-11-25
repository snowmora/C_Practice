#include <stdio.h>
#include <stdlib.h>

void userinput (int *num1, int *num2);                  // prototypes
void multplier (int *res, int *num1, int *num2);

int main (){

    int num1 = 0, num2 = 0, res = 0;
    int *pNum1 = &num1,*pNum2 = &num2, *pRes = &res;

    userinput(pNum1, pNum2);
    
    multplier(pRes, pNum1, pNum2);

    printf("res value is -- %d", res);


    return 0;
}

void userinput (int *num1, int *num2){
    printf("enter num1 value:");
    scanf("%d", &*num1);              // it could also be "scanf("%d", num1);"
    printf("enter num2 value:");
    scanf("%d", &*num2);
}

void multplier (int *res, int *num1, int *num2){
    (*res) = (*num1) + (*num2);
}