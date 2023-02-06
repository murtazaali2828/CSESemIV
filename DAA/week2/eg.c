#include<stdio.h>
#include<stdlib.h>

int findGCD(int m, int n){
	int opcount = 1;
	int r;
	while(n){
		opcount++;
		r=m%n;
		m=n;
		n=r;
	}
	printf("Opcount : %d\n",opcount);
	return m;
}


int main(){
	int k = findGCD(183,51);
	printf("%d\n",k);
}