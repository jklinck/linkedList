//  gcc -o main main.c linkedList.c


#include <stdio.h>
#include "linkedList.h"


int main(){

	add(5);
	add(7);
	add(9);
	add(11);
	add(13);

	printf("\n");
	print();
	count();
	// removeNode(15);
	// insertNewHead(3);
	insert(8);
	print();
	count();
	printf("\n");


	clear();
	return 0;
}

