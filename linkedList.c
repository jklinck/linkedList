#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

struct linkedList* list = NULL;

//  ----------------------------------------------------------------------------------------------------------


void add(int nodeData){
	struct linkedList* newNode = malloc(sizeof(struct linkedList));
	if(newNode == NULL){
		printf("Memory allocation failed");
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
	if(list == NULL){
		printf("List is empty.\n");
		return;
	}

	printf("[");
	struct linkedList* temp = list;
	
	while(temp != NULL){
		if(temp->next == NULL){
			printf("%d]\n", temp->data);
			return;
		}
		else{
			printf("%d, ", temp->data);
			temp = temp->next;
		}	

	}
	
	printf("]\n");
}

//  ----------------------------------------------------------------------------------------------------------

void count(){
	int count = 0;
	if(list == NULL){
		printf("List count = %d\n", count);
		return;
	}
	struct linkedList* temp = list;
	count++;  // this counts the head
	
	while(temp->next != NULL){
		count++;
		temp = temp->next;
	}
	printf("List count = %d\n", count);
}

//  ----------------------------------------------------------------------------------------------------------

void clear(){
	struct linkedList* current = list;
	struct linkedList* temp;

	while(current != NULL){
		temp = current->next;
		free(current);
		current = temp;
	}
}

//  ----------------------------------------------------------------------------------------------------------

void removeNode(int nodeData){
	struct linkedList* temp = list;
	struct linkedList* prev = list;  // hold onto previous node so it can point to removedNode->next

	if(list->data == nodeData){
		list = list->next;
		free(temp);
		return;
	}

	// /*
	// code above properly deletes the head node,
	// code below still needs to be completed

	// */

	while(temp->data != nodeData){
		prev = temp;
		temp = temp->next;
	}

	if(temp->data == nodeData){
		prev->next = temp->next;
		free(temp);
		return;
	}
}

//  ----------------------------------------------------------------------------------------------------------





















