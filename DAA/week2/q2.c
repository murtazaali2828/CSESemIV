#include<stdio.h>
#include<stdlib.h>

int findGCD(int m, int n){

    int primes[n+1];
    int i,j;
    int opcount = 1;
    for(i = 2; i<=n; i++){
        primes[i] = i;
        opcount++;
    }

    i = 2;
    while ((i*i) <= n)
    {

        if (primes[i] != 0)
        {
            for(j=2; j<n; j++)
            {
                if (primes[i]*j > n)
                    break;
                else
                    primes[primes[i]*j]=0;
            }
        }
        i++;
       	opcount++;
    }

    int primes2[m+1];
    for(i = 2; i<=m; i++)
        primes2[i] = i;

    i = 2;
    while ((i*i) <= m)
    {
        if (primes2[i] != 0)
        {
            for(j=2; j<m; j++)
            {
                if (primes2[i]*j > m)
                    break;
                else
                    primes2[primes2[i]*j]=0;
            }
        }
        i++;
        opcount++;
    }

   	int sum = 1;
   	int z = (m>n)?n:m;
   	for(int k=0;k<z;k++){
   		if(primes2[k]!=0 && primes[k]!=0 && m%primes2[k]==0 && n%primes[k]==0){
   			//sum *= primes[k];
   			int v = primes[k];
   			int t = primes[k];
   			while(1){
   				v *=t;
   				if(m%v==0 && n%v==0){
   					primes[k]=v;
   				}
   				else{
   					break;
   				}
   			}
   			sum *= primes[k];	
   		}
   		opcount++;
   	}
   	printf("opcount : %d\n",opcount);
   	return sum;
}

//24 = 2 2 2 3
//60 = 2 2  2 3 5 

int main(){
	// int k = findGCD(4200,3780);
	int k = findGCD(18,12);
	printf("\n\nEuclid : %d\n",k);
}