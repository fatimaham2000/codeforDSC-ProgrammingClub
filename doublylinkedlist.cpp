#include <iostream>
//single linked list
using namespace std;
struct Node{
	int data;
	struct Node *next; //pointer to the next node
	struct Node *prev; //pointer to the previous node
};
//** means pointer to a pointer
//insertion functions
void push(struct Node** head, int nodeData){
	//push add an element to the beginning of the linkedlist
	struct Node* newNode1 = new Node;
	newNode1 ->data = nodeData;
	newNode1 -> next = (*head);
	newNode1->prev = NULL;
  
   //previous of head is new node
   if ((*head) != NULL)
   (*head)->prev = newNode1;
	(*head) = newNode1;
}
void insertAfter(struct Node* prevNode, int nodeData){
	//insert after a specific node
	if(prevNode==NULL)
	{
		cout<<"Previous node cannot be null";
		return;
	}
	struct Node* newNode1 = new Node;
	newNode1 -> data = nodeData;
	newNode1 -> next = prevNode -> next;
	prevNode -> next = newNode1;
	//set prev of newnode1 to prevnode
   newNode1->prev = prevNode;
  
   //set prev of new node's next to newnode
   if (newNode1->next != NULL)
   newNode1->next->prev = newNode1;
}
void append(struct Node** head, int nodeData){
	//add to the end of the linked list
	struct Node* newNode1 = new Node;
	struct Node *last = *head;
	newNode1 -> data = nodeData;
	newNode1-> next = NULL;
	if(*head==NULL){
		newNode1->prev = NULL;
		*head = newNode1;
		return;
	}
	while(last->next != NULL){
		last = last->next;
		last-> next = newNode1;
		newNode1->prev = last;
		return;
	}
}
void printLinkedList(struct Node *node){
		if(node==NULL){
		cout<<"Linked list is empty";
	}
	while(node!=NULL){
		cout<<node-> data;
		if(node->next !=NULL){
			cout<<"<==>";
		}
		if(node->next ==NULL){
			cout<<endl;
		}
		node = node -> next;
	}

}
//deletion functions
Node* deletingFirstNode(struct Node* head){
	if(head==NULL)
	return NULL;
	Node* tempNode= head;
	head=head-> next;
	head->prev = NULL;
	delete tempNode; //delete pointer
	return head;
}
Node* removingLastNode(struct Node* head)
{
	if(head==NULL)
	return NULL;
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	Node* secondLast = head;
	while(secondLast->next->next!=NULL){
		
		secondLast=secondLast->next;}
		delete(secondLast->next);
		secondLast->next=NULL;
		return head;
	
}
void removeAt(struct Node* prevNode){
	//insert after a specific node
	if(prevNode==NULL)
	{
		cout<<"Previous node cannot be null";
		return;
	}
	struct Node* temp = prevNode->next;
	prevNode -> next = temp->next;
	prevNode->next->prev = temp->prev;
	delete temp;
}
int main()
{
	//The -> (arrow) operator is used to access class, structure or union members using a pointer
	struct Node* head = NULL;  
	
append ( &head, 15 );   
  
push ( &head, 35 );   
append ( &head, 45 ); 
push ( &head, 25 );  
insertAfter ( head -> next, 55 );  
   
cout << "Final linked list: " << endl;  
printLinkedList(head);  
cout<<"After deleting first node: "<<endl;
head = deletingFirstNode(head);
printLinkedList(head);
cout<<"After deleting last node: "<<endl;
head = removingLastNode(head);
printLinkedList(head);
cout<<"After deleting second node: "<<endl;
removeAt(head);
printLinkedList(head);
	return 0;
}
