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
	if(list == NULL){
		printf("List is empty.");
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
	}
	struct linkedList* temp = list;
	count++;
	while(temp->next != NULL){
		count++;
		temp = temp->next;
	}
	printf("List count = %d\n", count);
}

//  ----------------------------------------------------------------------------------------------------------

void clear(){
	
}


















