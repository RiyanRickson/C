// Riyan Rickson Castelino 
// Pes2ug25am339 
// week 5 program 4
#include <stdio.h>
int main()
{ 
    int bus[5][4],book=0,i,avail,j;
    printf("Enter seat availiblity (1= Booked, 0= Available): \n");
    for(i=0;i<5;i++)
    {
        printf("Row %d \n",i+1);
        for(j=0;j<4;j++)
        {
            printf("Seat %d: ",j+1);
            scanf("%d",&bus[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(bus[i][j]==1)
            {
                book++;
            }
        }
    }
    avail=20-book;
    printf("Seat availbility matrix: \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",bus[i][j]);
        }
        printf("\n");
    }
    printf("Booked seats: %d \nAvailable seats: %d",book,avail);    return 0;
}