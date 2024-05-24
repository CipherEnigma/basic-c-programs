#include<stdio.h>
//call by reference
void update_ref(int *num){
*num+=10;
printf("Enter the value inside the function %d",*num);
}

int main()
{
    int y=15;
    update_ref(&y);
    printf("Enter the value outside the function %d:", y);

}


