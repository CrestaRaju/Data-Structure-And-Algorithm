#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node*right;
	
};
struct node *newNode(int data)
{
	struct node *node=new(struct node);
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);	
}
void printPostorder(struct node* node)
{
	if(node== NULL)
	printPostorder(node->left);
	printPostorder(node->right);
	cout<<node->data;
}
void printInorder(struct node* node)
{
	if(node== NULL)
	return;
	printInorder(node->left);	
	cout<<node->data;
	printInorder(node->right);
}
void printPreorder(struct node* node)
{
	if(node== NULL)
	return;
	printPreorder(node->left);	
	printPreorder(node->right);
	cout<<node->data;
}
int main()
{
	struct node *root=newNode(1);
	root->left= newNode(2);
	root->right= newNode(3);
	root->left->left= newNode(4);
	root->left->right= newNode(5);
	cout<<"\n Preorder traversal of binary tree is \t";
	printPreorder(root);
	cout<<"\n\n Inorder traversal of binary tree is \t";
	printInorder(root);
	cout<<"\n\n Postorder traversal of binary tree is \t";
	printPostorder(root);
	return 0;
}
