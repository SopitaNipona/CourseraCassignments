#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//double linked list
struct list
{
    int data;
    struct list *next;
	struct list *prev;
};

//define list as a type
typedef struct list list;

//init variables with null value
list *head = NULL;
list *tail = NULL;

//Creates the first node and assigns memory on the heap
list *create_list(int d)
{
    list* head = malloc(sizeof(list));
    head->data = d;
    head->next = NULL;
	head->prev = NULL;
	//Returns a pointer of list type
    return head;
}

//adds to back of the head
//adds to front of the head
list *add_to_front(int d, list *h)
{
	list *head = create_list(d);
	head -> next = h;
	h -> prev = head;
	//Returns a pointer of list type
	return head;
}

//gets the size and array to iterate and create more nodes with the information
list *array_to_list(int d[], int size)
{
	list *head = create_list(d[0]);
	int i;
	for(i = 1; i < size; i++)
	{
		head = add_to_front(d[i], head);
	}
	//Returns a pointer of list type
	return head;
}

//gets the list by reference and the title in a string
void print_list(list *h, char *title)
{
	int count = 0;
	printf("%s\n", title);
	//iterates to the next node and prints the data
	while(h != NULL){
		count++;
		printf("%d ", h -> data);
		//makes a new line after 5 printed numbers
		if (count == 5)
		{
			printf("\n");
			count = 0;
		}
		h = h -> next;
	}
	printf("\n");
}

//Not used in current excersise
void concat(list *h1, list *h2)
{
	assert(h1 != NULL);
	if (h1 -> next == NULL){
		h1 -> next = h2;
	} else {
		concat(h1 -> next, h2);
	}
}

//Not used in current excersise
void insert(list *p1, list *p2, list *q)
{
	assert(p1 -> next == p2);
	p1 -> next = q;
	q -> next = p2;
}

//Changes the value of the list by reference
void swap_int_data(list *h1, list *h2)
{
	//Changes the in value of the lists
	int temp = 0;
	temp = h1 -> data;
	h1 -> data = h2 -> data;
	h2 -> data = temp;
}

//Changes the list by reference pointer
void bubble_sort(list *h)
{
	if (!h) return; // If the list is empty, do nothing

	int swapped;
	list *current;

	//Executes do first to raise the Swap flag
	do {
		swapped = 0;  // Reset swap flag
		current = h;

		//checks if the next node isnt null
		while (current->next != NULL) {
			//compares the value of the next node with the current one
			if (current->data > current->next->data) {
				swap_int_data(current, current->next);
				swapped = 1;  // Indicate a swap occurred
			}
			//Skips to the next one if the value in the current node isn't greater than the next node
			current = current->next;
		}
		//while swapped is true
	} while (swapped);
}

void eliminate_duplicates_ordered(list *h)
{
	//Loops through the entire list
	while (h -> next != NULL)
	{
		//if current value is equal to next one and prev or next isnt null
		if (h -> data == h -> next->data && h -> next != NULL && h -> prev != NULL)
		{
			//unlink the node from the neighbor nodes
			h -> next -> prev = h -> prev;
			h -> prev -> next = h -> next;
		}
		//continues iteration
		h = h -> next;
	}
}

int main(void)
{
    //int array[] = {5,1,6,7,3,6};
	int random_array[200];
	srand(0);
	int i;
	for (i = 0; i < 200; i++) {
		//stablishes a range in the random generated numbers from 0 to 49
		random_array[i] = rand() % (49 + 1 - 0) + 0;
	}
    head = array_to_list(random_array, 200);
    print_list(head, "random array to list");
    bubble_sort(head);
	eliminate_duplicates_ordered(head);
    print_list(head, "sorted with bubble sort");
    return 0;
}
