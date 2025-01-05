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
		h = h -> next;
	}
	printf("\n");
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

void swap_int_data(list *h1, list *h2)
{
	int temp = 0;
	temp = h1 -> data;
	h1 -> data = h2 -> data;
	h2 -> data = temp;
}

void bubble_sort(list *h)
{
	list *h_copy = h;
	int changed
	/*
	do{	 
		if (h -> data > h -> next -> data)
		{
			swap_int_data(h, h -> next);
			h = h -> next;
			changes++ ;
		}
		if (h -> next == NULL && changes != 0){
			h = h_copy;
			changes++;
		}
		else {
			h = h -> next;
		}
	}
	while (h -> next != NULL && changes != 0);
	*/
}

int main(void)
{
    int array[] = {5,1,6,7,3,6};
    head = array_to_list(array, 6);
    //printf("%d\n", head -> data);
    //print_list(head, "god help me\n");
    print_list(head, "array to list\n");
    //printf("%d\n", head -> data);
    bubble_sort(head);
    print_list(head, "sorted with bubble sort");
    return 0;
}
