// program to convert Fahrenheit To Celsius
#include <stdio.h>

int main(){
    double f,c;
    printf("Enter temprature in Fahrenheit: ");
    scanf("%lf",&f);
    c=(f-32)*0.5555555;
    printf("temprature in celsius %.2lf ",c);
    return 0;
}