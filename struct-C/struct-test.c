#include <stdlib.h>
#include <stdio.h>

/*typedef struct
{
    char name[20];
    int score;

} Player;
*/

struct Player
{
    char name[20];
    int score;

};

int main()
{

    struct Player player1;
    struct Player player2;

    printf("set your player 1 name and score! \n");
    printf("name: ");
    scanf("%20s", player1.name);
    printf("score: ");
    scanf("%d", &player1.score);

    printf("\n%s", player1.name);
    printf("\n%d\n", player1.score);

    printf("\nnow set the player 2 name and score! \n");
    printf("name: ");
    scanf("%20s", player2.name);
    printf("score: ");
    scanf("%d", &player2.score);

    printf("\n%s", player2.name);
    printf("\n%d\n", player2.score);


    return 0;
}




/*
(*p_peca).numero = 100;

ou

p_peca->numero = 100;
*/

/*
A struct that isn't typedef'd requires you to use the keyword struct every time you use it as a type
(so it'd be struct MyStruct mystruct;).
This doesn't apply for structs you typedef.
*/