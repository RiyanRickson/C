#include <stdio.h>
int main()
{
    int a[10],max,i,j;
    printf("Enter the array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<10;i++)
    {
        max=i;
        for(j=i+1;j<10;j++)
        {
            if(a[j]>a[max])
            {
                max=j;
            }
        }
        a[i]=a[i]+a[max];
        a[max]=a[i]-a[max];
        a[i]=a[i]-a[max];
    }
    printf("Sorted array: ");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
