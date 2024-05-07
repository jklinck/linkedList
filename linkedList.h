
typedef struct linkedList{
	int data;
	struct linkedList* next;
}list;


void add(int nodeData, list* head);

void print();