#include <stdio.h>
int main()
{
    int days, yy,mm;
    printf("Enter the number of days: ");
    scanf("%d",&days);
    yy=days/365;
    days=days%365;
    mm=days/30;
    days=days%30;
    printf("Project will last %d years %d months %d days",yy,mm,days);
    return 0;
}