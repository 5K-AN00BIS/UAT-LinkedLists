// Ryan Bachman
// CSC383 - Data Structures and Algorithms
// University of Advancing Technologies

// Linked List
// Pros
// No size limit until running out of memory.
// Better memory usage since it only uses what's needed.
// Insert is faster than an array.

// Cons
// Can't directly access one location without traversing down the list until it's found.
// Arrays are faster (but size cannot be changed).

// Good For
// Playlists
// History (stack)
// Low level memory management
// Hash table
// Implementation of queue
// Image viewer

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creates the node as a struct.
struct node
{
	int num; // Data part
	node* next; // Pointer to next
};

// Insert -> Goes to the end -> Create a new node -> new node next = 0 -> current next = new node.

// Global Variables
node* head = NULL; // Pointer to the head.
node* current = NULL; // Pointer to the current node.

// Function used to insert new nodes into the linked lists.
void insert(int newNum)
{
	struct node* newnode = new node; // Creates the new node in the list.
	// Head and current need to be set to the new node.
	if (head == NULL)
	{
		head = newnode;
		current = newnode;
	}

	newnode->num = newNum; // Assuming there is a node, it sets the new node data to newNum.
	newnode->next = NULL; // There is no next, so this will be going to the end of the linked list.
	current->next = newnode; // Points to the new node we created earlier.
	current = newnode; // Keeps the current node moving down constantly when new ones are created.
}

// Function for printing out the linked list.
void print()
{
	struct node* curr = head; // Creates a node at the very head of the list and will update as we move through the list.

	// Not equal to null, because if null it means there are no more values.
	while (curr != NULL)
	{
		cout << curr->num << endl;
		curr = curr->next;
	}
}

// Main function begins.
int main()
{
	current = head; // Because we want it to start at the beginning.
	// Create a for loop to populate the linked list easily.
	for (int i = 1; i < 21; i++)
	{
		// Calls the insert function and adds the number to newNum from the arguments list.
		insert(i);
	}

	// Calls the print function so we can see the list.
	print();

	system("pause"); // So it stops before quitting out.
	return 0;
	
} // End of main function.