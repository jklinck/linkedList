//  gcc -o main main.c linkedList.c

#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


int main(){

	list* head = (list*)malloc(sizeof(list*));
	if(head == NULL){
			printf("Memory allocation for head failed.");
			return 1;
	}

	add(5, head);
	add(7, head);

	printf("head->data = %d\n", head->data);
	printf("head->next->data = %d\n", head->next->data); //  this is printing out bogus data

	free(head);
	return 0;
}







