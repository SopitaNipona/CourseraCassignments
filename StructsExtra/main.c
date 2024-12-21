#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 1000
#define EMPTY (-1)
#define FULL (MAX_LEN - 1)

typedef enum card_value {ace, one, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king} card_value;
typedef enum card_suit {heart, diamonds, club, spade} card_suit;

typedef struct card
{
    card_value value;
    card_suit suit;
} card;

typedef struct card_stack
{
    card *data[];
    int top;
} card_stack;

void reset(card_stack *stk){stk -> top = EMPTY;}

void push(card_stack *stk, card *c_push)
{
    stk -> top++;
    //check pointer
    stk -> data[stk -> top] = c_push;
}

void make_card(){}

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}