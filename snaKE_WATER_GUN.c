//snake water gun game
#include<stdio.h>
int snakeWaterGun(char you, char comp){
//return 1 if you win , -1 if you loose and 0 if you draw
if (you==comp)
{
    return 0;
}
if(you =='s' && comp =='w'){
    return 1;
}
else if (you =='w' && comp =='s'){
    return -1;
}

if(you =='s' && comp =='g'){
    return -1;
}
else if (you =='g' && comp =='s') {
    return 1;
}
if(you =='g' && comp =='w'){
    return -1;
}
else if(you =='w' && comp =='g') {
    return 1;
}

}



int main(){
    char you, comp;
    comp = 's';
printf("enter 's' for snake 'g' for gun and 'w' for water\n");
scanf("%c",&you);
int result = snakeWaterGun(you, comp);
printf("You choose %c and computer choose %c ", you, comp);
if(result == 0)
{
    printf("Game draw\n");
}
else if(result == 0){
    printf("you won\n");
}
else (result ==0);
{
    printf("you loose\n");
}



    return 0;
}