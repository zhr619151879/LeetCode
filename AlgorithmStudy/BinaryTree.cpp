#include <cstdio>
#include <stdlib.h>
using namespace std;

 typedef struct node
{
	int data;
	struct *node left;
	struct *node right;
} Node ;

typedef struct tree
{
	Node *root;
} Tree;

void insert(Tree *tree ,int value){
	Node *node = malloc(sizeof(Node)); //node to insert
	node->data = value;
	node->left = NULL;
	node->right = NULL;

	if(tree ->root ==NULL){
		tree->root = node;
	}
	else {
		Node *temp = tree->root;
		while(temp!=NULL){
			if(value < temp->data){
				if(temp->left ==NULL){
					temp->left = node;
					return ;
				}
				else temp = temp->left;
			}

			else {
				if (temp->right ==NULL){
					temp->right = node;
				}
				else temp = temp->right;
			}
		}
	}
}

void preorder(Node* node){
	if(node != NULL){
		printf("%d", node->data );
		preorder(node->left);
		preorder(node->right);
	}
}

void inorder(Node* node){
	if(node != NULL){
		inorder(node->left);
		printf("%d", node->data );
		inorder(node->right);
	}
}

void postorder(Node* node){
	if(node != NULL){
		inorder(node->left);
		inorder(node->right);
		printf("%d", node->data );
	}
}

int get_height(Node *node){
	if (node == NULL) return 0;

	else{
		int left_h = get_height(node->left);
		int right_h = get_height(node->right);
		return left_h>right_h?left_h+1:right_h+1;
	}
}

//example
int main(){
	int arr[7] = {6,3,8,2,5,1,7} ;
	Tree tree;
	tree.root==NULL;

	for (int i = 0; i < 7; ++i)
	{
		insert(&tree,arr[i]);
	}
	preorder(tree.root);
}
