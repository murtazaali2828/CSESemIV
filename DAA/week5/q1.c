#include<stdio.h>
#include<stdlib.h>
void assignProb(int mat[4][4],int n){
	int min = 10000000;
	int sum;
	int col[4];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) continue;
			for(int k=0;k<n;k++){
				if(k==i || k==j) 
					continue;
				for(int l=0;l<n;l++){
					if(l==i || l==j || l==k)
						continue;
					sum = mat[0][i]+mat[1][j]+mat[2][k]+mat[3][l];
					//printf("\n%d\n",sum);
					if(min > sum){
						min = sum;
						col[0] = i+1;
						col[1] = j+1;
						col[2] = k+1; 
						col[3] = l+1;
					}
				}
			}
		}
	}
	printf("Minimum Cost : %d\n",min);
	for(int i=0;i<n;i++){
		printf("Person %d : Job %d\n",i+1,col[i]);
	}
}

int main(){
	int assign[4][4]={{9,2,7,8},{6,4,3,7},{5,8,1,8},{7,6,9,4}};
	int n=4;
	assignProb(assign,n);
}