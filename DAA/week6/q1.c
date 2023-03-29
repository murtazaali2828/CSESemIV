#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* lchild;
	struct node* rchild;
};
typedef struct node node; 

node* insert(int item){
	int x;
	if(item!=-1){
		node* temp = (node*)malloc(sizeof(node));
		temp->data = item;
		printf("Enter value of lchild of %d : ",item);
		scanf("%d",&x);
		temp->lchild = insert(x);
		printf("Enter value of rchild of %d : ",item);
		scanf("%d",&x);
		temp->rchild = insert(x);
		return temp;
	}
	return NULL;
}
void createTree(){
	node* root = insert(2);
}

int count(node* root){
	static int c = 0;
	if(root!=NULL){
		count(root->lchild);
		c++;
		count(root->rchild);
	}
	return c;
}
int main(){

	node* root= insert(2);
	printf("COUNT : %d\n",count(root));
	return 0;
}