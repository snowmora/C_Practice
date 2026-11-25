#include <stdlib.h>
#include <stdio.h>

void birthday(int *age);
void userinput(int *age);


int main (){

    int age = 0;
    int *pAge = &age;

    userinput(pAge);

    birthday(pAge);


}


void userinput(int *age){

    printf("how old are you?");
    scanf("%d", age);

}

void birthday(int *age){

    (*age)++;
    printf("youll be %d old in your birthday!", *age);
}