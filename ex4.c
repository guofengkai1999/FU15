//
//  ex4.c
//
//
//  Created by s1252003 on 2020/08/02.
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int coin, positive=0, negative=0;
    char name[30];
    srand(time(NULL));

    //input mane
    printf("Who are you?\n>");
    scanf("%s",name);
    printf("Hello, %s!\n\n",name);

    //coin tos
    printf("Tossing a coin...\n");

    for(int i=0;i<3;i++){
        printf("Round %d:",i);
        coin=rand()%2;

        if(coin==0){
            positive++;
            printf("Heads\n");
        }
        else{
            negative++;
            printf("Tails\n");
        }
    }

    printf("Heads: %d, Tails: %d\n",positive,negative);

    //judge
    if(positive>negative) printf("\n%s won!\n",name);
    else printf("\n%s lost.\n",name);
  
    return 0;
}