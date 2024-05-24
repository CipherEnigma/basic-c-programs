#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp=NULL;
    char str[50];
    char ch='s';
    int a;
    fp=fopen("ray.txt","w");
    if(fp==NULL)
    {
        printf("ERROR");
        exit(1);

    }
   // printf("Enter the string:");
   // gets(str);
     
   // for(i=0;i!=strlen(str);i++)
    //  fputc(str[i],fp);
printf("Enter the string:");
gets(str);
     // fprintf(fp,"%d %s %c",a,str,ch);
      



    fclose(fp);




    
    
}