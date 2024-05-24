#include<stdio.h>
struct student
{
    int rollno;
    char name;
    float marks;
};
void main()
{ int i;
struct student s[3];
for(i=0;i<3;i++);
{
    scanf("%d %s %f", &s[i].rollno,s[i].name,&s[i].marks);
    printf("These are the desired values");
}
}
