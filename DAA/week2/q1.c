#include<stdio.h>
#include<stdlib.h>

int findGCD(int m, int n){
	int t = (m>n)? n:m;
	int opcount = 1;
	while(t){
		opcount++;
		if(m%t==0 && n%t==0){
			printf("Opcount : %d\n",opcount);
			return t;
		}
		t--;
	}
	printf("Opcount : %d\n",opcount);
	return 0;
}


int main(){
	int k = findGCD(183,51);
	printf("%d\n",k);
}