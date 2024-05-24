#include<stdio.h>

int func1(int n);
int main()
{
    int n=7;
    printf("%d",func1(n));
}
int func1(int n)
{
    if(n>0)
    return(n*func1(n-1));
    else
    return 0;
}
