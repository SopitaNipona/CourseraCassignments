#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct list
{
    int data;
    struct list *next;
};

typedef struct list list;

list *head = NULL;
list *tail = NULL;

list *create_list(int d)
{
    list* head = malloc(sizeof(list));
    head->data = d;
    head->next = NULL;
    return head;
}

list *add_to_front(int d, list *h)
{
    list *head = create_list(d);
    head->next = h;
    return head;
}

list *array_to_list(int d[], int size)
{
	list *head = create_list(d[0]);
	int i;
	for(i = 1; i < size; i++)
	{
		head = add_to_front(d[i], head);
	}
	return head;
}

void print_list(list *h, char *title)
{
	printf("%s\n", title);
	while(h != NULL){
		printf("%d", h -> data);
		h -> next;
	}
}

void concat(list *h1, list *h2)
{
	assert(h1 != NULL);
	if (h1 -> next == NULL){
		h1 -> next = h2;
	} else {
		concat(h1 -> next, h2);
	}
}

void insert(list *p1, list *p2, list *q)
{
	assert(p1 -> next == p2);
	p1 -> next = q;
	q -> next = p2;
}

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}
