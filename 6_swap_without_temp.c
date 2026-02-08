// program two swap two numbers without using temporary variable

#include <stdio.h>

int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: %d %d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping: %d %d",a,b);
    return 0;
}