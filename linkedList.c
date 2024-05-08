#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

struct linkedList *list = NULL;

//  ----------------------------------------------------------------------------------------------------------


void add(int nodeData){
	struct linkedList* newNode = malloc(sizeof(struct linkedList));
	if(newNode == NULL){
		printf("Memory allocation for newNode from add in linkedList.c failed");
		return;
	}
	newNode->data = nodeData;
	newNode->next = NULL;

	if(list == NULL){
		list = newNode;
		return;
	}
	struct linkedList* temp = list;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

//  ----------------------------------------------------------------------------------------------------------

void print(){
	printf("[");
	if(list == NULL){
		printf("List is empty.");
	}
	else{
		printf("%d, ", list->data);
		printf("%d, ", list->next->data);
		printf("%d", list->next->next->data);
	}
	printf("]\n");
}

//  ----------------------------------------------------------------------------------------------------------





