#include <iostream>
//single linked list
using namespace std;
struct Node{
	int data;
	struct Node *next; //pointer to the next node
};
//** means pointer to a pointer
//insertion functions
void push(struct Node** head, int nodeData){
	//push add an element to the beginning of the linkedlist
	struct Node* newNode1 = new Node;
	newNode1 ->data = nodeData;
	newNode1 -> next = (*head);
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
}
void append(struct Node** head, int nodeData){
	//add to the end of the linked list
	struct Node* newNode1 = new Node;
	struct Node *last = *head;
	newNode1 -> data = nodeData;
	newNode1-> next = NULL;
	if(*head==NULL){
		*head = newNode1;
		return;
	}
	while(last->next != NULL){
		last = last->next;
		last-> next = newNode1;
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
			cout<<"-->";
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
