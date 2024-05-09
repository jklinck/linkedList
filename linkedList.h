
struct linkedList{
	int data;
	struct linkedList* next;
};

extern struct linkedList* list;

// add a node to the list
void add(int nodeData);

// print the list
void print();

// count how many nodes are list
void count();

// removes a node from the list
void removeNode();

// traverses through list and performs free() function to free up allocated heap memory
void clear();






