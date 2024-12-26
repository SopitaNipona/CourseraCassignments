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
    //error: flexible array member not at end of struct
    //Fix with MAX_LEN
    card *data[MAX_LEN];
    int top;
} card_stack;

void reset(card_stack *stk) {
    stk -> top = EMPTY;
    for (int i = 0; i < MAX_LEN; i++) {
        stk->data[i] = nullptr;
    }
}

void push(card_stack *stk, card *c_push)
{
    stk -> top++;
    //check pointer
    stk -> data[stk -> top] = c_push;
}

card* make_card(card_value c_val,card_suit c_suit)
{
    card *new_card = malloc(sizeof(card));
    new_card -> value = c_val;
    new_card -> suit = c_suit;
    return new_card;
}

void shuffle(card_stack *stk)
{
    size_t n = sizeof(stk -> data) / sizeof(stk -> data[0]);
    if (n > 1)
    {
        size_t i;
        for (i = 0; i < n - 1; i++)
        {
            size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
            card *t = stk -> data[j];
            stk -> data[j] = stk -> data[i];
            stk -> data[i] = t;
        }
    }
}

int main(void)
{
    card_stack stack;
    reset(&stack);
    card *new_card1 = make_card(one, heart);
    card *new_card2 = make_card(one, spade);
    card *new_card3 = make_card(two, spade);
    card *new_card4 = make_card(three, spade);
    card *new_card5 = make_card(four, spade);
    push(&stack, new_card1);
    push(&stack, new_card2);
    push(&stack, new_card3);
    push(&stack, new_card4);
    push(&stack, new_card5);
    return 0;
}