#include<stdio.h>
int main()
{  
    int price[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &price[i]);

    }
    int p;
    int maxprofit=0;
    {
        for(int i=0;i<n;i++)
        if(price[i]<price[i-1])
        {
            maxprofit+=p;
        }
    printf("%d", maxprofit);
    }
    }
    

    
    

