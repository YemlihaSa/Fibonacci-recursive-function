#include <stdio.h>
#include <stdlib.h>

//   -----TEKRAR ET------

int fib(int);

int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    printf("%d th term of the series %d",x,fib(x));
}

int fib(int n)
{
    if(n==0 || n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
