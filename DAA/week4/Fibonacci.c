#include<stdio.h>
#include<stdlib.h>

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
 

int main()
{
    int n = 5;
    printf("Fib result : %d\n",fib(n));
    return 0;
}