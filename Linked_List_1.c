#include <stdio.h>
#include <stdlib.h>

typedef struct Linkedlist {
	int data;
	struct Linkedlist *next;
}LL;

void Print_Node(LL *temp) {
	int i=1;

	while(temp != NULL) {
		printf("node-%d data is %d \t", i++, temp->data);
		temp = temp->next;
	}
}


int main()
{
	LL *head, *node;
	
    node = (LL *) malloc(sizeof(LL));
	node->next = (LL *) malloc(sizeof(LL));
	node->next->next = (LL *) malloc(sizeof(LL));
	node->next->next->next = NULL;
	
//Feeding data
	node->data = 10;
	node->next->data = 20;
	node->next->next->data = 30;
	head = node;

	Print_Node(head);
	
    return 0;
}