#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


void add(int nodeData, list* head){
	list* temp;

	if(head->data == 0){
		head->data = nodeData;
		head->next = NULL;
	}
	else{
		list* newNode = (list*)malloc(sizeof(list*));
		if(newNode == NULL){
			printf("Memory allocation for current failed.");
			return;
		}

		newNode->data = nodeData;
		newNode->next = NULL;

		head->next = newNode;

		// printf("head->next->data = %d\n", head->next->data);
		

		free(newNode);
	}
}

void print(){

}




