#include <stdio.h>
#include <stdbool.h>


int main(void){
    bool in_hand[4][13] = {false};
    int num_cards, rank, suit;
    const int mySuit[] = {0,2,1,2,2,0,1,1,3,3,2,0,1,2,3,2,0,1,3,0};
    const int myRank[] = {3,1,10,1,5,4,6,2,12,0,11,1,5,7,0,12,2,8,5,10};
    const char suitList[] = {'c','d','h','s'};
    const char rankList[] = {'2','3','4','5','6','7','8','9','t','j','q','k','a'};

    scanf("%d", &num_cards);
    scanf("%d", &suit);
    scanf("%d", &rank);

    while(num_cards > 0){
        if(!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            printf("%c%c ", rankList[myRank[rank]], suitList[mySuit[suit]]);
            rank++;
            suit++;
            num_cards--;
        }
    }

    printf("\n");

    return 0;

}