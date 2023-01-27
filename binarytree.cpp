#include <iostream>
using namespace std;
struct bintree_node{
	bintree_node *left; //left child pointer
	bintree_node *right; //right child pointer
	int data; //data in node
};
class bst{
    bintree_node *root; //first node in binary tree
    public:
    //class constructor
    bst(){
        root=NULL;
    }
    //checks if binary tree is empty
    int isempty() {
        return(root==NULL);
    }
    void insert(int item);
    void displayBinTree();
    void printBinTree(bintree_node *);
     
};
void bst::insert(int item){
    bintree_node *p=new bintree_node;
    bintree_node *parent;
    p->data=item;
    p->left=NULL;
    p->right=NULL;
    parent=NULL;
    if(isempty())
        root=p; //if binary tree is empty, p becomes the root 
    else{
        bintree_node *ptr;
        ptr=root;
        while(ptr!=NULL){
            parent=ptr;
            if(item>ptr->data)        
                ptr=ptr->right; //if node bigger than root then point to right
            else
                ptr=ptr->left; //if node less than root then point to left
        }   
        if(item<parent->data)
            parent->left=p; //if p<parent becomes left child
        else
            parent->right=p; //if p>parent then it becomes right child
    }
}
void bst::displayBinTree(){
    printBinTree(root);
}
void bst::printBinTree(bintree_node *ptr){
    if(ptr!=NULL){
        printBinTree(ptr->left);
        cout<<"  "<<ptr->data<<"     ";
        printBinTree(ptr->right);
    }
}
int main()
{
	 bst b;
    b.insert(20);
    b.insert(10);
    b.insert(5);
    b.insert(15);
    b.insert(40);
    b.insert(45);
    b.insert(30); 
     
    cout<<"Binary tree created: "<<endl;
    b.displayBinTree(); 
	return 0;
}
