#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    size_t n = stk->top;
    if (n > 1)
    {
        for (size_t i = n - 1; i > 0; i--)
        {
            // Generate a random index between 0 and i (inclusive)
            size_t j = rand() % (i + 1);

            // Swap the cards at index i and j
            card *temp_card = stk->data[i];
            stk->data[i] = stk->data[j];
            stk->data[j] = temp_card;
        }
    }
}

void add_cards_to_stack(card_stack *stk) {
    for (int i = 0; i <= 13; i++) {
        push(stk, make_card(i, heart));
        push(stk, make_card(i, diamonds));
        push(stk, make_card(i, club));
        push(stk, make_card(i, spade));
    }
}

int main(void)
{
    card_stack stack;
    reset(&stack);
    add_cards_to_stack(&stack);
    printf("%d\n", stack.top);
    printf("%d\n", stack.data[5] -> suit);
    shuffle(&stack);
    printf("%d\n", stack.top);
    printf("%d\n", stack.data[5] -> suit);
    return 0;
}