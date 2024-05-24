#include<stdio.h>
int globalvar=10;
int fun(){
    printf("globalvar: %d",globalvar);
}
int main()
{
    fun();
    fun();
    return 0;
    
}