#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int opcount = 1;

int stringMatching(char* main1, char* child, int n, int m){
	for(int i=0;i<=(n-m);i++){
		opcount++;
		int j=0;
		while(j<m && child[j]==main1[i+j]){
			opcount++;
			j++;
			if(j==m){
				printf("Opcount : %d\n",opcount);
				return i;
			}
		}
	}
	opcount++;
	return -1;
}


int main(){
	char* main1 = "fatherbrother";
	char* child = "bro";
	printf("%d\n",stringMatching(main1, child, strlen(main1), strlen(child)));
}
