// program to calculate area of triangle 
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,s;
    printf("Enter the three sides of triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("Area is %.2f",sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}