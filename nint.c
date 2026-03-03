// Riyan Rickson Castelino 
// Pes2ug25am339 
// week 5 program 2
#include <stdio.h>
int main()
{ 
    int arr[100],i,even=0,odd=0,n;
    printf("Enter number of elements: ");
    scanf("%d",n);
    for(i=0;i<n;i++)
        scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even elements: %d \n Odd elements: %d",even,odd);
    return 0;
}