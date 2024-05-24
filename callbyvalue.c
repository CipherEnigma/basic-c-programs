#include<stdio.h>

//call by value
void update_value(int num){
num+=10;
printf("value inside the function is %d:", num);
}

int main()
{
    int x=5;
    update_value(x);
    printf("Value outside the function is %d:", x);
}