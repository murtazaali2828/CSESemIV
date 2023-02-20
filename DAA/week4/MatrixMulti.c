#include<stdio.h>
#include<stdlib.h>

void martrixMulti(int a[10][10],int b[10][10],int mul[10][10],int n){
	int i,j,k;
	for(i=0;i<n;i++)    
	{    
		for(j=0;j<n;j++)    
		{    
			mul[i][j]=0;    
			for(k=0;k<n;k++){    
			mul[i][j]+=a[i][k]*b[k][j];    
			}    
		}    
	}
	printf("Value of FINAL matrix :\n");
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		printf("%d\t",mul[i][j]);
    	}
    	printf("\n");
    }   
}

int main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    int A[10][10], B[10][10], mul[10][10];
    printf("Enter the values of 1st matrix  :\n");
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		scanf("%d",&A[i][j]);
    	}
    }
    printf("Enter the values of 2nd matrix  :\n");
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		scanf("%d",&B[i][j]);
    	}
    }
    martrixMulti(A,B,mul,n);
    return 0;
}



