// Riyan Rickson Castelino
// Pes2ug25am339
// week 5 program 1

#include <stdio.h>
int main()
{
    int exp[7],total=0,days=0,i;
    printf("Enter expenses for 7 days: ");
    for(i=0;i<7;i++)
        scanf("%d",&exp[i]);
    for(i=0;i<7;i++)
    {
        if(exp[i]>1000)
        {
            days++;
            total+=exp[i];
        }
    }
    printf("Total expense: %d \nNumber of days expense was above 1000: %d",total,days);
    return 0;
}