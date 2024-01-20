#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RockPaperScissor(char you, char comp){
    // return 1 if you win, -1 if you lose, 0 if draw
    // condition for draw
    // case covered
    // rr
    // pp
    // ss

    if(you == comp){
        return 0;
    }
    // non draw conditions
    // case covered
    // rp
    // pr
    // sr
    // rs
    // sp
    // ps

    if(you == 'r' && comp == 'p'){
        return -1;
    }
    else if(you == 'p' && comp == 'r'){
        return 1;
    }
    if(you == 's' && comp == 'r'){
        return -1;
    }
    else if(you == 'r' && comp == 's'){
        return 1;
    }
    if(you == 's' && comp == 'p'){
        return 1;
    }
    else if(you == 'p' && comp == 's'){
        return -1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp='r';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='s';
    }
    printf("Enter 'r' for rock, 'p' for paper, 's' for scissor \n");
    scanf("%c",&you);
    int result = RockPaperScissor(you, comp);
    if(result == 0){
        printf("Game draw!\n");
    }
    else if(result == 1){
        printf("You win!\n");
    }
    else{
        printf("You lose!\n");
    }
    printf("You chose %c and comp chose %c.",you,comp);
    return 0;
}