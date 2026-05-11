#include <stdio.h>
void eligible (float inc,float score)
{
    int c=1;
    if (inc >500000)
    {
        c=0;
    }
    if(score<85)
    {
        c=0;
    }
    if(c)
    {
        printf("Eligible ");
    }
    else
    {
        printf("Not eligible");
    }
}
int main()
{
    float inc , score;
    printf("Enter students family income and score: ");
    scanf("%f %f",&inc ,&score);
    eligible(inc,score);
    return 0;
}