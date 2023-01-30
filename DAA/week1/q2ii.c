#include<stdio.h>
#include<stdlib.h>

//Adjacency List

struct node{
	int data;
	struct node* next;
};
typedef struct node node;
node* insert(node* root, int d){
	node *temp=root,*nnode;
	nnode =(node*)malloc(sizeof(node));
	nnode->data = d;
	nnode->next = NULL;
	if(root==NULL){
		root=nnode;
	}
	else{
		while(temp->next)
			temp=temp->next;
		temp->next=nnode;
	}
	return root;
}
void display(node* root){
	while(root){
		printf("%d->",root->data);
		root=root->next;
	}
	printf("\n");
}
int main(){
	int n,ch;
	printf("Enter the number of vertices: \n");
	scanf("%d",&n);
	node** arr = (node**)malloc(sizeof(node*));
	for(int i=0;i<n;i++){
		arr[i] = insert(arr[i],i+1);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Is there an edge between %d and %d\nEnter 1 for yes and 0 for no\n",i+1,j+1);
			scanf("%d",&ch);
			if(ch==1){
				arr[i] = insert(arr[i],j+1);
			}
		}	
	}
	for(int i=0;i<n;i++){
		display(arr[i]);
	}
}