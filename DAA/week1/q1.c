#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* lchild;
	struct node* rchild;
};
typedef struct node node;
node* root=NULL;
node* createBSTree(node* p,int key){
    if (p==NULL)
    {
        p=malloc(sizeof(struct node));
        p->data=key;
        p->rchild=NULL;
        p->lchild=NULL;
        return p;
    }
    else if(key<p->data)
    {
        p->lchild=createBSTree(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=createBSTree(p->rchild,key);
    }
    return p;
}
void inorder(node* root){
	if(root){
		inorder(root->lchild);
		printf("%d\n",root->data);
		inorder(root->rchild);
	}
}
void preorder(node* root){
	if(root){
		printf("%d\n",root->data);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}
void postorder(node* root){
	if(root){
		postorder(root->lchild);
		postorder(root->rchild);
		printf("%d\n",root->data);
	}
}
void searchBST(node* root, int key){
	while(root){
		if(root->data==key){
			printf("Key Found\n");
			return;
		}
		else if(key<root->data){
			root=root->lchild;
		}
		else{
			root=root->rchild;
		}
	}
	printf("Key Not Found.\n");
}
int main(){
	root=createBSTree(root,1);
	createBSTree(root,2);
	createBSTree(root,4);
	createBSTree(root,6);
	createBSTree(root,8);
	inorder(root);
	searchBST(root,4);
	postorder(root);
	preorder(root);
}