#include<iostream>
#include<conio.h>
using namespace std;
struct node

{
    int data;
	struct node *left= NULL;
	struct node *right= NULL;	
};
struct node *newNode(int data)
{
	struct node *node=new(struct node);
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
	
}


void display(struct node *node)
{
	if(node==NULL)
	return; 
	cout<<"\t"<<node->data;
	display(node->left);
	display(node->right);
}
int main()
{
	struct node *root= newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	cout<<"\n\n Preorder traversal of binary tree is \t";
	display(root);
}
