// Program to Convert days into years, weeks, days

#include <stdio.h>

int main(){
    int days,yr,wk,dd;
    printf("Enter number of days: ");
    scanf("%d",&days);
    yr=days/365;
    wk=(days%365)/7;
    dd=(days%365)%7;
    printf("%d number of days is equal to %d years %d weeks %d days",days,yr,wk,dd);
    return 0;

}