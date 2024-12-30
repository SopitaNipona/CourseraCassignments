#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_LEN 1000
#define EMPTY (-1)
#define FULL (MAX_LEN - 1)

typedef enum card_value {ace, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king} card_value;
typedef enum card_suit {heart, diamonds, club, spade} card_suit;

typedef struct card
{
    card_value value;
    card_suit suit;
} card;

typedef struct card_stack
{
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

void init_random_seed()
{
    srand((unsigned int)time(NULL));
}


void shuffle(card_stack *stk)
{
    size_t n = stk->top;
    if (n > 1)
    {
        for (size_t i = n; i > 0; i--)
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
    for (int i = 0; i <= 12; i++) {
        push(stk, make_card(i, heart));
        push(stk, make_card(i, diamonds));
        push(stk, make_card(i, club));
        push(stk, make_card(i, spade));
    }
}

void print_stack(card_stack *stk)
{
    char *suit_print[] = {"Hearts", "Diamonds", "clubs", "Spades"};
    char *value_print[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    for (int i = 0; i <= stk->top; i++)
    {
        printf("%s %s\n", suit_print[stk->data[i] -> suit], value_print[stk->data[i] -> value]);
    }
}

void print_hand(card_stack *stk)
{
    char *suit_print[] = {"Hearts", "Diamonds", "clubs", "Spades"};
    char *value_print[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    for (int i = stk->top; i > stk->top-7; i--)
    {
        //printf("%d  %d \n",stk->data[i] -> value, stk->data[i] -> suit);
        printf("%s %s\n", suit_print[stk->data[i] -> suit], value_print[stk->data[i] -> value]);
    }
}

void determine_hand(card_stack *stk) {
    int j = 0;
    int x_times_values[13] = {0};
    card_value values[7] = {0};
    int pairs = 0, three_of_a_Kind = 0, four_of_a_kind = 0, full_house = 0;

    for (int i = stk->top; i > stk->top - 7 && i >= 0; i--) {
        values[j] = stk->data[i]->value;
        j++;
    }

    for (size_t i = 0; i < 7; i++) {
        x_times_values[values[i]]++;
    }

    for (size_t i = 0; i < 13; i++) {
        switch (x_times_values[i]) {
        case 2:
            pairs++;
            break;
        case 3:
            three_of_a_Kind++;
            break;
        case 4:
            four_of_a_kind++;
            break;
        }
    }

    if (pairs >= 1 && three_of_a_Kind >= 1) {
        full_house = 1;
    }

    if (full_house > 0) {
        printf("full house!!!\n");
    } else if (four_of_a_kind > 0) {
        printf("four of a kind!!!\n");
    } else if (three_of_a_Kind > 0) {
        printf("three of a kind!!!\n");
    } else if (pairs > 0) {
        printf("pairs!!!\n");
    } else {
        printf("no formation\n");
    }
}

int main(void)
{
    init_random_seed();
    card_stack stack;
    reset(&stack);
    add_cards_to_stack(&stack);
    //print_cards(&stack);
    shuffle(&stack);
    print_hand(&stack);
    determine_hand(&stack);
    reset(&stack);
    return 0;
}