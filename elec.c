// Riyan Rickson Castelino 
// Pes2ug25am339 
// week 5 program 3
#include <stdio.h>
int main()
{ 
    int unit[6],total=0,c=0,i;
    float avg;
    printf("Enter electricity units consumed by 6 houses: ");
    for(i=0;i<6;i++)
    {
        printf("House %d :",i+1);
        scanf("%d",&unit[i]);
    }
    for(i=0;i<6;i++)
    {
        total+=unit[i];
        if(unit[i]>300)
        {
            c++;
        }
    }
    avg=total/6;
    printf("Total units consumed: %d \n Average consumption: %.2f \n");
    printf("Number of houses consuming more than 300 units: %d",c);

    return 0;
}