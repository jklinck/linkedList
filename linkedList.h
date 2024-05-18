
struct linkedList{
	int data;
	struct linkedList* next;
};

extern struct linkedList* list;


// -----------------------------------------------------------------------------------------

//                COMPLETED FUNCTIONS

// add a node to the list
void add(int nodeData);

// print the list
void print();

// count how many nodes are list
void count();

// traverses through list and performs free() function to free up allocated heap memory
void clear();

// removes a node from the list
void removeNode(int nodeData);

// inserts a new head into the list and makes the current head the second node
void insertNewHead(int nodeData);

// inserts a node into a specific spot between two other existing nodes
void insert(int nodeData);

// -----------------------------------------------------------------------------------------

//                INCOMPLETE FUNCTIONS

// reverses the linked list
void reverse();






