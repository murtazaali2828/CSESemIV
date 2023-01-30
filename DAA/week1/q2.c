#include<stdio.h>
#include<stdlib.h>

//Adjacency Matrix

int main(){
	int n;
	int ch;
	printf("Enter the number of vertices:\n");
	scanf("%d",&n);
	int **m = (int**)malloc(sizeof(int*));
	for(int i=0;i<n;i++){
		m[i]=malloc(sizeof(int));
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			*(*(m+i)+j)=0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Is there an edge between %d and %d\nEnter 1 for yes and 0 for no\n",i+1,j+1);
			scanf("%d",&ch);
			if(ch==1){
				*(*(m+i)+j)=1;
			}
		}	
	}
	printf("The resultant matrix is :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",*(*(m+i)+j));
		}
		printf("\n");
	}
}