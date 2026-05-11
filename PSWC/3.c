#include <stdio.h>
void calc(float unit)
{
    float bill=0;
    bill+=100;
    if(unit >10)
    {
        unit-=10;
        bill+=unit*20;
    }
    printf("total bill is %.2f",bill);
}
int main(){
    float u;
    printf("Enter the units used: ");
    scanf("%f",&u);
    calc(u);
    return 0;
}