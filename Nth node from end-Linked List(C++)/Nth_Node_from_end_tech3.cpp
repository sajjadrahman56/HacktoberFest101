// C++ program for the above approach
#include <iostream>
using namespace std;

// Node class to represent
// a node of the linked list.
class Node {
public:
	int data;
	Node* next;

	// Default constructor
	Node()
	{
		data = 0;
		next = NULL;
	}

	// Parameterised Constructor
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node* head= NULL;

// Function to insert a new node.
void insertNode(int data)
{
	// Create the new Node.
	Node* newNode = new Node(data);

	// Assign to head
	if (head == NULL) {
		head = newNode;
		return;
	}

	// Traverse till end of list
	Node* temp = head;
	while (temp->next != NULL) {

		// Update temp
		temp = temp->next;
	}

	// Insert at the last.
	temp->next = newNode;
}

// Function to print the
// nodes of the linked list.
void printList()
{
	Node* temp = head;

	// Check for empty list.
	if (head == NULL) {
		cout << "List empty" << endl;
		return;
	}

	// Traverse the list.
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

// Driver Code
int main()
{
	

	// Inserting nodes
	insertNode(1);
	insertNode(2);
	insertNode(3);
	insertNode(4);
    insertNode(5);
	insertNode(6);
	insertNode(7);
	insertNode(8);

	cout << "Elements of the list are: ";

	// Print the list
	printList();
	cout << endl;
   
   //Node to be found from last assuming it is always within bounds	
    int k=3;
    if(head==NULL)
      cout<<"List is empty\n";
    else{  
    //Initializing two pointers
    Node* fast=head;
    Node* slow=head;
  
    //Moving fast pointer forward by k
    while(k--)
         fast=fast->next;
     //Traversing fast ans slow till fast reaches end
     //As when it reaches last slow and fast pointer has differnce of k
     // slow will point to k element from last
     while(fast!=NULL)
     {
        slow=slow->next;
        fast=fast->next;
     }
      cout<<"The required element is:"<<slow->data<<"\n";
    }
    

	return 0;
}
